#include <iostream>
using namespace std;

int main()
{
    // Declaration of numeric variables
    int a = 10;           // Signed integer
    unsigned int b = 20U; // Unsigned integer (U suffix)
    long c = 1000000L;    // Long integer (L suffix)
    float d = 3.14f;      // Single-precision floating-point number (f suffix)
    double e = 2.71828;   // Double-precision floating-point number

    // Basic arithmetic operations
    int sum = a + static_cast<int>(b);                // Addition
    int difference = static_cast<int>(b) - a;         // Subtraction
    int product = a * 2;                              // Multiplication
    int integerDivision = b / a;                      // Integer division: 20 / 10 = 2
    double realDivision = static_cast<double>(b) / d; // Floating-point division

    // Modulo operator (valid only for integer types)
    int remainder = static_cast<int>(b) % a; // 20 % 10 = 0

    // Increment and decrement
    int x = 5;
    int y = ++x; // Pre-increment: x = 6, y = 6
    int z = x++; // Post-increment: z = 6, then x = 7

    // Operator precedence
    int result1 = a + static_cast<int>(b) * 2;
    // Multiplication before addition: 10 + (20 * 2) = 50

    int result2 = (a + static_cast<int>(b)) * 2;
    // Parentheses change the order of evaluation: (10 + 20) * 2 = 60

    // Display the results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Integer division: " << integerDivision << endl;
    cout << "Floating-point division: " << realDivision << endl;
    cout << "Remainder (modulo): " << remainder << endl;
    cout << "Pre-increment (++x): y = " << y << ", x = " << x << endl;
    cout << "Post-increment (x++): z = " << z << ", x = " << x << endl;
    cout << "Result without parentheses: " << result1 << endl;
    cout << "Result with parentheses: " << result2 << endl;

    return 0;
}