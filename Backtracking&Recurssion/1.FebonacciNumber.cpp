// Nth Febonacci Number using Recursion
//Febonacci Number is a number in the series where each number is the sum of the two preceding ones, usually starting with 0 and 1. The sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on.

#include <bits/stdc++.h>
using namespace std;

int febonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return febonacci(n-1) + febonacci(n-2);
}

int main()
{
    int n=5;
    cout << febonacci(n);
}