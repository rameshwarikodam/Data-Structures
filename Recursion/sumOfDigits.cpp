#include <iostream>
using namespace std;
int sumOfDigitsRecursive(int n)
{
    int sum = 0;
    if (n < 10)
        return n;
    return (n % 10 + sumOfDigitsRecursive(n / 10));
}

int main()
{
    cout << sumOfDigitsRecursive(123);
}