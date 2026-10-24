#include <iostream>
using namespace std;

int main()
{

    unsigned int i{1};
    int factorial{1};

    // for (; i <= 5; i ++)
    for (; i <= 5;)
    {
        factorial *= i;
        i++;
    }

    cout << "5! = " << factorial << endl;

    cout << "\n================================\n";

    cout << "Even and odd numbers\n";
    unsigned int lowerLimit{0};
    unsigned int upperLimit{0};

    cout << "Lower limit: ";
    cin >> lowerLimit;
    // Redeclare i with lowerLimit to simplify the for loop
    i = lowerLimit;
    cout << "Upper limit: ";
    cin >> upperLimit;

    // for (int i = lowerLimit; i <= upperLimit; i++)
    for (; i <= upperLimit; i++)
    {
        // Use bitwise AND (&) to check the least significant bit
        // If it is 1, the number is odd
        if ((i & 1) != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}