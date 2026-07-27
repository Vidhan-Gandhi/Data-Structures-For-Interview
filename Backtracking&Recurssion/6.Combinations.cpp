#include <bits/stdc++.h>
using namespace std;

void Combinations(vector<int>&arr, int index, vector<int>& subset, vector<vector<int>>& allcombination,int K)
{
    if(index==arr.size() )
    {
        if(subset.size()==K)
        {
            allcombination.push_back(subset);
        }
        return;
    }
    subset.push_back(arr[index]);
    Combinations(arr,index+1,subset,allcombination,K);
    subset.pop_back();
    Combinations(arr,index+1,subset,allcombination,K);
}

int main()
{
    int K=2;
    int n=4;
    vector<int> arr;
    for(int i=1;i<=n;i++)
    {
        arr.push_back(i);
    }
    vector<int> subset;
    vector<vector<int>> allcombination;
    Combinations(arr,0,subset,allcombination,K);
    for(auto& it:allcombination)
    {
        for(auto& i:it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

}