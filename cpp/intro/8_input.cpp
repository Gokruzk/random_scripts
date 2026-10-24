#include <iostream>
#include <string>
using namespace std;

int main()
{

    int age{};
    string name{};

    cout << "Age: ";
    cin >> age;

    cin.ignore(); // clean buffer

    cout << "Full name: ";
    getline(cin, name);

    cout << name << " is " << age << " year/s old." << endl;

    return 0;
}