#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "KCxsqitexsffxs";
    cout << name.size() << endl; // or .length(), both return a size_t type number
    cout << boolalpha;
    cout << name.empty() << endl;
    cout << name.at(1) << endl; // C
    // cout << name.at(10) << endl; // out of range exception

    cout << name.front() << endl;
    cout << name.back() << endl;
    cout << name.substr(1, 3) << endl;
    cout << name.find("xs") << endl;
    cout << name.rfind("xs") << endl;
    name.erase(2, 2);
    name.insert(2, "xd");
    name.replace(8, 2, "xd");
    name.append("xs");
    cout << name << endl;
    name.compare("KCxdqitexdffxs") == 0 ? cout << "The strings are equal\n" : cout << "No equal strings\n";

    cout << "[";
    for (size_t i = 0; i < name.size(); i++)
    {
        cout << name.at(i);
        if (i < name.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    // range-based for
    cout << "[";
    for (char c : name)
    {
        cout << c;
    }
    cout << "]" << endl;

    for (string::iterator it = name.begin(); it != name.end(); ++it)
    {
        cout << *it;
    }

    return 0;
}