#include <iostream>
using namespace std;

int main()
{
    enum class Flat
    {
        Room = 1,
        Studio,
        Suite
    };

    Flat myFlat = Flat::Room;

    if (myFlat == Flat::Room)
    {
        cout << "My flat is a room, with value: " << static_cast<int>(myFlat) << endl;
    }

    int n{0};
    cout << "New flat? Enter the type (1: Room, 2: Studio, 3: Suite): ";
    cin >> n;

    if (n >= 1 && n <= 3)
    {
        Flat newFlat{static_cast<Flat>(n)};
        cout << "The new flat's value is " << static_cast<int>(newFlat)<<endl;
    }
    else
    {
        cout << "Invalid value";
        return 1;
    }

    // Typed values
    enum class Weekend : unsigned char
    {
        Saturday = 1,
        Sunday = 2
    };

    int day{};
    cout << "When is your check-in? (1: Saturday, 2: Sunday): ";
    cin >> day;

    if (day < 1 || day > 2)
    {
        cout << "Invalid value";
        return 1;
    }

    Weekend w{static_cast<Weekend>(day)};

    switch (w)
    {
    case Weekend::Saturday:
        cout << "Your check-in is on saturday\n";
        break;
    case Weekend::Sunday:
        cout << "Your check-in is on sunday\n";
        break;
    default:
        break;
    }

    return 0;
}