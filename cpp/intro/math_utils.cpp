#include "math_utils.h"

int square(int x)
{
    return x * x;
}
bool isEven(int x)
{
    return (x & 1) == 0;
}
int factorial(int n)
{
    if (n < 1)
        return 1;
    return n * factorial(n - 1);
}