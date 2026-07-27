#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>&arr){
    for(int i=0;i<arr.size();i++)
    {
        int mini=i;
        for(int j=i;j<arr.size();j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

int main(){
    vector<int>arr={5,4,3,2,1};
    SelectionSort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}