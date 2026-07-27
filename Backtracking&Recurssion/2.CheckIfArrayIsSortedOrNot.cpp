// C++ program to check if an array is sorted or not using recursion


#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr, int n)
{
    if(n==1 || n==0)
    {
        return true;
    }
    if(arr[n-1]>=arr[n-2])
    {
        return true;
    }
    else 
    {
        return false;
    }
    isSorted(arr, n-1);

}

int main()
{
    vector<int> arr = {1, 2, 3, 6, 5};
    int n = arr.size();
    if(isSorted(arr, n))
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
}