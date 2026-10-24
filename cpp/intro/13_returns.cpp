#include <iostream>
#include <string>
using namespace std;

string userName = "rkz";

unsigned int numberPow(unsigned int b, unsigned int p);
string &getUserName();            // original modifiable
const string &getConstUserName(); // original not modifiable

unsigned int factorial(const unsigned int &n);

int main()
{

    unsigned int b{2};

    cout << numberPow(b, 3) << endl;

    cout << userName << endl;

    getUserName() = "xyz";

    cout << "Modified username: " << userName << endl;

    cout << "5 factorial = " << factorial(5) << endl;

    return 0;
}

unsigned int numberPow(unsigned int b, unsigned int p)
{
    unsigned int base{b};
    for (int i = 0; i < p - 1; i++)
    {
        b *= base;
    }
    return b;
}
string &getUserName()
{
    return userName;
}
const string &getConstUserName()
{
    return userName;
}

unsigned int factorial(const unsigned int &n)
{
    if (n < 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}