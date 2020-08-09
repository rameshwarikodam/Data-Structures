#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(char str[], int s, int e)
{
    if (s == e)
        return true;
    if (s > e)
        return true;
    if (str[s] != str[e])
        return false;
    return (str, s + 1, e - 1);
}

int main()
{
    char str[] = "madam";
    int s = 0, e;
    e = strlen(str) - 1;
    cout << isPalindrome(str, s, e);
}