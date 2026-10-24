#include <iostream>
using namespace std;

int main()
{
    // Character types
    char letter = 'A';          // Character literal (ASCII value 65)
    unsigned char symbol = 200; // Extended ASCII (value 200)
    char newline = '\n';        // Escape character: newline
    char tab = '\t';            // Escape character: tab

    // Arithmetic operations with characters
    char next = letter + 1; // 'B' = 66, 'A' = 65, 65 + 1 = 66
    int code = letter;      // Implicit conversion from char to int (prints 65)

    cout << "Letter: " << letter << endl;
    cout << "Next letter: " << next << endl;
    cout << "ASCII code of " << letter << ": " << code << endl;
    cout << "Special character (tab + text):" << tab << "Hello" << endl;

    // ----- Boolean data types -----
    bool trueValue = true;
    bool falseValue = false;

    // cout << boolalpha; // Prints true/false instead of 1/0
    cout << "True value: " << trueValue << endl;
    cout << "False value: " << falseValue << endl;

    return 0;
}