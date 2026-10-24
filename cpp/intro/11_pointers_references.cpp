#include <iostream>
using namespace std;

int main()
{
    unsigned int age = 81;

    // Accessing a variable's memory address and value
    cout << "Memory address: " << &age << endl;
    cout << "Value at the memory address: " << *&age << endl;

    *&age = 81; // Modify the value using the address
    cout << "Value: " << age << endl;

    // Create a pointer that stores age's memory address
    unsigned int *pointer{&age};

    cout << "Memory address: " << pointer << endl;
    cout << "Value pointed to: " << *pointer << endl;

    *pointer = 101; // Modify age through the pointer

    cout << "New value through pointer: " << *pointer << endl;
    cout << "New age value: " << age << endl;

    cout << "\n================================\n";

    unsigned int speed{20};
    unsigned int &ref_speed = speed;

    // Accessing a variable through a reference
    cout << "Value: " << speed << endl;
    cout << "Reference value: " << ref_speed << endl;

    ref_speed = 80; // Modify speed through the reference

    cout << "New value: " << speed << endl;
    cout << "New reference value: " << ref_speed << endl;

    return 0;
}