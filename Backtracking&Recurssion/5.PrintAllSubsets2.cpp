// Print all subsets of an array with duplicates
//You are given an array of integers that may contain duplicates. You need to print all possible subsets of the array, ensuring that each subset is unique (i.e., no duplicate subsets should be printed).
// For example, if the input array is [1, 2, 2], the unique subsets would be: [], [1], [2], [1, 2], [2, 2], and [1, 2, 2]. and  all subsets will be [[], [1], [2], [1, 2], [2, 2], [1, 2, 2]].

#include <bits/stdc++.h>
using namespace std;

void PrintAllSubsets2(vector<int>& arr, int index, vector<int>& subset, set<vector<int>>& allsubsets)
{
    if(index==arr.size())
    {
        allsubsets.insert(subset);
        return;
    }
    subset.push_back(arr[index]);
    PrintAllSubsets2(arr,index+1,subset,allsubsets);
    subset.pop_back();
    PrintAllSubsets2(arr,index+1,subset,allsubsets);
}

int main()
{
    vector<int> arr = {1, 2, 2};
    vector<int> subset;
    set<vector<int>> allsubsets;
    PrintAllSubsets2(arr,0,subset,allsubsets);
    for(auto& it:allsubsets)
    {
        for(auto& i:it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}