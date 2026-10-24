#include <iostream>
using namespace std;

int main()
{
    int integer{5};
    double doubl{2.5};

    double result = (integer + doubl);

    // auto casting, the compiler cast the variables to avoid losing data
    cout << "Result: " << result << "\n"; // 7.5

    double doub{3.5};
    // explicit casting on initialization
    int intg{static_cast<int>(doub)};

    cout << doub << ", " << intg << "\n";

    // explicit casting on asignation
    intg = intg + static_cast<int>(2.3);
    cout << "Sum: " << intg << "\n";

    char vowel{'a'};
    int code{static_cast<int>(vowel)};

    cout << vowel << ": " << code << "\n";

    return 0;
}