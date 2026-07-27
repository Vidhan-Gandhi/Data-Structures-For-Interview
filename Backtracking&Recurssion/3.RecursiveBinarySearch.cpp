// C++ program to implement recursive Binary Search

#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int>& arr,int start,int end, int target)
{
    int mid=(start+end)/2;
    if(start>end)
    {
        return false;
    }
    if(arr[mid]>target)
    {
        return BinarySearch(arr,start,mid-1,target);
    }
    else if(arr[mid]<target)
    {
        return BinarySearch(arr,mid+1,end,target);
    }
    else if(arr[mid]==target)
    {
        return true;
    }
    
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int target = 15;
    int n = arr.size();
    if(BinarySearch(arr,0,n-1,target))
    {
        cout << "Element is present in the array";
    }
    else
    {
        cout << "Element is not present in the array";
    }
}