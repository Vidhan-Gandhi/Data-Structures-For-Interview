#include <bits/stdc++.h>
using namespace std;

void PrintAllSubsets(vector<int>& arr,int index, vector<int>& subset, vector<vector<int>>& allsubsets)
{
    if(index==arr.size())
    {
        allsubsets.push_back(subset);
        return;
    }
    subset.push_back(arr[index]);
    PrintAllSubsets(arr,index+1,subset,allsubsets);
    subset.pop_back();
    PrintAllSubsets(arr,index+1,subset,allsubsets);
}


int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> subset;
    vector<vector<int>> allsubsets;
    PrintAllSubsets(arr,0,subset,allsubsets);
    for(auto& it:allsubsets)
    {
        for(auto& i:it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}