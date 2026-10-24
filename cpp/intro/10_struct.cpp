#include <iostream>
using namespace std;

struct RentalUnit
{
    std::string description;
    std::string address;
    double price;
};

int main()
{
    double unitPrice{0};
    RentalUnit L101;
    L101.description = "Nice unit";
    L101.address = "AB 555";

    cout << "Enter the unit price: ";
    cin >> unitPrice;

    string message = unitPrice < 0 ? "The unit price can't be negative" : "Valid price";

    if (unitPrice < 0)
    {
        cout << message<<endl;
        return 1;
    }

    RentalUnit L102{"Big unit", "AB 555", 120};

    // Prints
    cout << "Description: " << L102.description << endl;
    cout << "Address: " << L101.address << endl;
    cout << "Price: " << L101.price << endl;

    return 0;
}