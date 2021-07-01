/*
    Problem Statement - Repeat and Missing Number
    input - [0,1,5,4,3,1]
    output - missing = 2, repeated=1
*/

#include <bits/stdc++.h>
using namespace std;
void findMissingAndRepeated(int inpArr[], int size)
{
    int countArr[size] = {0};
    int repeated, missing;
    for (int i = 0; i < size; i++)
    {
        countArr[inpArr[i]]++;
    }
    // countArr
    // t
    for (int i = 0; i < size; i++)
    {
        if (countArr[i] > 1)
        {
            repeated = i;
        }
        if (countArr[i] == 0)
        {
            missing = i;
        }
    }
    cout << "Missing Number::" << missing << endl;
    cout << "Repeated Number::" << repeated << endl;
}

int main()
{
    int inputArr[] = {0, 1, 5, 1, 3, 1};
    int size = sizeof(inputArr) / sizeof(inputArr[0]);
    findMissingAndRepeated(inputArr, size);
}