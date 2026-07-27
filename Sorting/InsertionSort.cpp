#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>&arr){
    for(int i=1;i<arr.size();i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main(){
    vector<int>arr={5,4,3,2,1};
    InsertionSort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}