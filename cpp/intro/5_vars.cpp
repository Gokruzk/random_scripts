#include <iostream>
using namespace std;

int count{0};

int main()
{

    int speed{20};                // uniform initialization
    auto salary{400.25};          // auto inference (double)
    decltype(salary) PI{3.14159}; // inference with decltype (double)
    const bool lifeInEarth{true}; // constant
    constexpr int length{5};      // constante en tiempo de compilación

    int array[length];

    count += 1;

    cout << "Speed: " << speed << "\n";
    cout << "Salary: " << salary << "\n";
    cout << "PI: " << PI << "\n";
    cout << "Counter: " << count << "\n";

    cout << boolalpha;
    cout << "Is there life in the earth? " << lifeInEarth << "\n";

    cout << "Array length:" << length << "\n";

    return 0;
}