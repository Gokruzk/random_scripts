#include <iostream>
using namespace std;

int main()
{
    std::string user{""}; // rkz
    std::string psw{""};  // rkz123

    std::cout << "Login" << std::endl;

    std::cout << "User: ";
    getline(cin, user);
    std::cout << "Password: ";
    getline(cin, psw);

    if (user != "rkz" || psw != "rkz123")
    {
        std::cout << "Invalid credentials\n";
    }
    else
    {
        std::cout << "Greetings\n";
    }

    cout << "\n================================\n";

    int a{0};
    int b{0};
    int c{0};
    cout << "Sort three numbers from highest to lower\n";
    cout << "a: ";
    cin >> a;
    cin.ignore();
    cout << "b: ";
    cin >> b;
    cin.ignore();
    cout << "c: ";
    cin >> c;

    // 3! -> abc, acb, bac, bca, cab, cba

    if (a > b && a > c)
    {
        cout << a;
        if (b > c)
        {
            cout << ", " << b << ", " << c;
        }
        else
        {
            cout << ", " << c << ", " << b;
        }
    }
    else if (b > a && b > c)
    {
        cout << b;
        if (a > c)
        {
            cout << ", " << a << ", " << c;
        }
        else
        {
            cout << ", " << c << ", " << a;
        }
    }
    else
    {
        cout << c;
        if (a > b)
        {
            cout << ", " << a << ", " << b;
        }
        else
        {
            cout << ", " << b << ", " << a;
        }
    }

    cout << "\n================================\n";

    unsigned int day{0};
    unsigned int month{0};
    unsigned int year{0};
    cout << "Date validation\n";
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    if (day == 0 || month == 0 || year == 0)
    {
        cout << "The values must be greater than 0";
        return 1;
    }
    if (month > 12)
    {
        cout << "Invalid month";
        return 1;
    }
    if (day > 31)
    {
        cout << "Invalid day\n";
        return 1;
    }

    // apr, jun, sep, nov
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
        {
            cout << "Invalid day\n";
            return 1;
        }
    }
    else if (month == 2)
    {
        bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
        if (isLeapYear)
        {
            if (day > 29)
            {
                cout << "Invalid day\n";
                return 1;
            }
        }
        else
        {
            if (day > 28)
            {
                cout << "Invalid day\n";
                return 1;
            }
        }
    }

    cout << "The date is valid!\n";

    return 0;
}