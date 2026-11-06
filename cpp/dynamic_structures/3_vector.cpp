#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct RentalUnit
{
    string name;
    double price;
};

void printV(const vector<RentalUnit> &units);
bool removeUnit(vector<RentalUnit> &units, const string &name);
bool updateUnit(const RentalUnit &Rn, vector<RentalUnit> &units, const string &name);
RentalUnit *findUnit(vector<RentalUnit> &units, const string &name);

int main()
{
    string message{};
    RentalUnit R1{"pretty", 70};

    RentalUnit R2{"small", 56.99};

    RentalUnit R3{"narrow", 90};

    vector<int> empty{};
    vector<RentalUnit> RentalUnits{R1};

    cout << "Size: " << RentalUnits.size() << endl;
    cout << boolalpha;
    cout << "is it empty? " << RentalUnits.empty() << endl;

    RentalUnits.push_back(R2);
    RentalUnits.push_back(R3);

    RentalUnits.pop_back();

    cout << "Front price: " << RentalUnits.front().price << endl;
    cout << "Back price: " << RentalUnits.back().price << endl;

    RentalUnits.push_back(R3);

    cout << "Third price: " << RentalUnits.at(2).price << endl;

    cout << "\nRental Units" << endl;
    printV(RentalUnits);

    message = removeUnit(RentalUnits, "pretty") == true ? "Removed" : "No removed";
    cout << message << "\n";

    RentalUnit R{"tiny", 16.99};
    message = updateUnit(R, RentalUnits, "small") == true ? "Updated" : "No updated";
    cout << message << "\n";

    printV(RentalUnits);

    RentalUnit *unit = findUnit(RentalUnits, "narrowx");

    if (unit != nullptr)
    {
        cout << unit->name << ": " << unit->price << "\n";
    }
    else
    {
        cout << "Unit not found" << "\n";
    }

    return 0;
}

void printV(const vector<RentalUnit> &units)
{
    cout << "\nUnits\n";
    for (const RentalUnit &r : units)
    {
        cout << r.name << ": " << r.price << "\n";
    }
}

bool removeUnit(vector<RentalUnit> &units, const string &name)
{
    for (auto it = units.begin(); it != units.end(); ++it)
    {
        if (it->name == name)
        {
            units.erase(it);
            return true;
        }
    }
    return false;
}

bool updateUnit(const RentalUnit &Rn, vector<RentalUnit> &units, const string &name)
{
    for (RentalUnit &r : units)
    {
        if (r.name == name)
        {
            r = Rn;
            return true;
        }
    }
    return false;
}

RentalUnit *findUnit(vector<RentalUnit> &units, const string &name)
{
    for (RentalUnit &r : units)
    {
        if (r.name == name)
        {
            return &r;
        }
    }
    return nullptr;
}