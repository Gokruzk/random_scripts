#include <iostream>
#include <array>
using namespace std;

void factorial(int &n)
{
    int b = n;
    for (int i = 1; i < b; i++)
    {
        n *= i;
    }
}

void calcElementsFactorial(array<int, 4> &arr)
{
    for (int &n : arr)
    {
        factorial(n);
    }
}

void printArray(const array<int, 4> &arr)
{
    cout << "[ ";
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i);
        if (i < arr.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << " ]" << endl;
}

int main()
{

    array<int, 4> numbers{1, 2, 3, 4};

    for (int n : numbers)
    {
        cout << n;
    }

    cout << numbers.size() << endl;
    cout << numbers.empty() << endl;
    cout << numbers.at(3) << endl;
    cout << numbers.front() << endl;
    cout << numbers.back() << endl;

    printArray(numbers);
    calcElementsFactorial(numbers);
    printArray(numbers);

    numbers.fill(4);

    for (int n : numbers)
    {
        cout << n << " ";
    }

    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}
