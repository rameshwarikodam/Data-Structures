#include <iostream>
using namespace std;
int a = 1;
void fun(int n)
{
    if (n < 1)
        return;
    fun(n - 1);
    cout << n << " ";
}

// Tail Recursive
void tailRecursive(int n, int k = 1)
{
    if (n < 1)
        return;
    cout << k << " ";
    tailRecursive(n - 1, k + 1);
}

int main()
{
    // tailRecursive(5);
    fun(6);
}
