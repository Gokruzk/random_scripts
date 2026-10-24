#include <iostream>
#include <string>
using namespace std;

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

    void getInfo()
    {
        cout << "Rental unit\nPrice: " << price << "\nSize: " << size << "m2\nDeposit: " << getWarrantyDeposit() << endl;
    }
};

class Property
{
private:
    string name;
    unsigned int floors;
    // composition
    RentalUnit rentalUnit;

public:
    Property()
    {
        name = "";
        floors = 0;
    }
    Property(string n, unsigned int f, RentalUnit p)
    {
        name = n;
        floors = f;
        rentalUnit = p;
    }

    void getPropertyInfo()
    {
        cout << "The property has  " << floors << " floor/s and its name is " << name << endl;
        rentalUnit.getInfo();
    }
};

int main()
{

    RentalUnit L101(55.99, 50, 2);

    cout << "Deposit: " << L101.getWarrantyDeposit() << endl;

    Property P102("nice prop", 3, L101);

    P102.getPropertyInfo();

    return 0;
}