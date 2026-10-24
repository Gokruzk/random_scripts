#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s1{};
    string s2{"Hola Mundo"};

    cout << s2 << endl;
    cout << s2[0] << endl;                // print H
    cout << s2.at(3) << endl;             // print a
    cout << s2.at(s2.size() - 1) << endl; // print last character

    // Concat
    string c1{"Hello"};
    string c2{"world"};
    string sw{};

    sw = c1 + " " + c2;

    cout << sw << endl;

    // String casting

    int n1{3};
    double n2{3.3};

    string txt1{to_string(n1)};
    string txt2{to_string(n2)};

    cout << "Int to string: " << txt1 << endl;
    cout << "Double to string: " << txt2 << endl;

    string txt3{"123"};
    string txt4{"2.25"};

    int n3{stoi(txt3)};
    double n4{stod(txt4)};

    cout << "String to int: " << n3 << endl;
    cout << "String to double: " << n4 << endl;

    return 0;
}