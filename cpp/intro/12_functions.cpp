#include <iostream>
#include <string>
using namespace std;

void greetings(string name = "user");   // Pass by value: creates a copy
void greetingsReferenced(string &name); // Pass by reference: can modify the original
// Pass by const reference: cannot modify the original through this reference
void greetingsConstantReferenced(const string &name);

int main()
{
    string name = "peter";
    greetings(name);                   // peter
    greetingsReferenced(name);         // tony (modified)
    cout << name << endl;              // modified
    greetingsConstantReferenced(name); // tony

    greetings(); // user
    return 0;
}

void greetings(string name)
{
    cout << "Hello " << name << endl;
    ;
}
void greetingsReferenced(string &name)
{
    name = "tony";
    cout << "Hello " << name << endl;
}
void greetingsConstantReferenced(const string &name)
{
    cout << "Hello " << name << endl;
}