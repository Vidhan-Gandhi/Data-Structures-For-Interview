#include <bits/stdc++.h>
using namespace std;

Void BubbleSort(vector<int>&arr){
    for(int i=arr.size()-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int>arr={5,4,3,2,1};
    BubbleSort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}