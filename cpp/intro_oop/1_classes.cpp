#include <iostream>
#include <string>
using namespace std;

class Lease
{
private:
    std::string subject;
    int id;

    // Static attribute, lease counter
    static int leaseCount;

public:
    // Constructor using initialization list
    Lease(const string &subject_) : subject{subject_}, id{++leaseCount}
    {
        std::cout << "Lease created: " << id << " - " << subject << '\n';
    }

    int getId() const
    {
        return id;
    }

    const std::string &getSubject() const
    {
        return subject;
    }

    // Static method
    static int leasesCount()
    {
        return leaseCount;
    }
};

class RentalUnit
{
public:
    double price;
    double size;
    unsigned int depositMonths;

    RentalUnit()
    {
        price = 0;
        size = 0;
        depositMonths = 0;
    }

    RentalUnit(double p, double s, unsigned int d)
    {
        price = p;
        size = s;
        depositMonths = d;
    }

    double getWarrantyDeposit()
    {
        return price * depositMonths;
    }

    string getInfo()
    {
        return "Rental unit\nPrice: " + to_string(price) + "\nSize: " + to_string(size) + "m2\nDeposit: " + to_string(getWarrantyDeposit());
    }
};

class Property
{
private:
    string name;
    unsigned int floors;

public:
    Property()
    {
        name = "";
        floors = 0;
    }
    Property(string n, unsigned int f)
    {
        name = n;
        floors = f;
    }

    // setters
    void setName(string n)
    {
        name = n;
    }

    void setFloors(const unsigned int &f)
    {
        floors = f;
    }

    // getters
    string getName()
    {
        return name;
    }

    unsigned int getFloors()
    {
        return floors;
    }

    void getPropertyInfo()
    {
        cout << "The property has  " << floors << " floor/s and its name is " << name << endl;
    }
};

// Inicialización del atributo estático (fuera de la clase)
int Lease::leaseCount = 0;

int main()
{

    RentalUnit L101(55.99, 50, 2);

    cout << "Deposit: " << L101.getWarrantyDeposit() << endl;

    Property P101;
    P101.setName("xd");
    P101.setFloors(3);

    P101.getPropertyInfo();

    Lease l1("Temporal");
    Lease l2("Church");
    Lease l3("Event");

    std::cout << "\nTotal leases: "
              << Lease::leasesCount() << '\n';

    return 0;
}