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
        if (b > c)
        {
            cout << a << ", " << b << ", " << c;
        }
        else
        {
            cout << a << ", " << c << ", " << b;
        }
    }
    else if (b > a && b > c)
    {
        if (a > c)
        {
            cout << b << ", " << a << ", " << c;
        }
        else
        {
            cout << b << ", " << c << ", " << a;
        }
    }
    else
    {
        if (a > b)
        {
            cout << c << ", " << a << ", " << b;
        }
        else
        {
            cout << c << ", " << b << ", " << a;
        }
    }

    cout << "\n================================\n";

    unsigned int day{0};
    unsigned int month{0};
    unsigned int year{0};
    cout << "Date validation\n";
    cout << "Day: ";
    cin >> day;
    cin.ignore();
    cout << "Month: ";
    cin >> month;
    cin.ignore();
    cout << "Year: ";
    cin >> year;
    cin.ignore();

    if (day < 0 || month < 0 || year < 0)
    {
        cout << "The values must be positive";
        return 1;
    }

    if (month > 12)
    {
        cout << "Invalid month";
        return 1;
    }
    if (day < 28 || day > 31)
    {
        cout << "Invalid day\n";
        return 1;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day != 31)
        {
            cout << "Invalid day\n";
            return 1;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day != 30)
        {
            cout << "Invalid day\n";
            return 1;
        }
    }
    else
    {
        // leap year
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            if (day != 29)
            {
                cout << "Invalid day\n";
                return 1;
            }
        }
        else
        {
            if (day != 28)
            {
                cout << "Invalid day\n";
                return 1;
            }
        }
    }

    cout << "The date is valid!\n";

    return 0;
}