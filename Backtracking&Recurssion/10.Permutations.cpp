// C++ program to print all permutations with duplicates allowed
// You are given an array of integers that may contain duplicates. You need to print all possible permutations of the array, ensuring that each permutation is unique (i.e., no duplicate permutations should be printed).


#include <bits/stdc++.h>
using namespace std;

void Permutations(vector<int>& arr, vector<int>& visited, vector<vector<int>>& allsubsets, vector<int>& subset)
{
    if(subset.size()==arr.size())
    {
        allsubsets.push_back(subset);
        return;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(visited[i]==0)
        {
            subset.push_back(arr[i]);
            visited[i]=1;
            Permutations(arr,visited,allsubsets,subset);
            subset.pop_back();
            visited[i]=0;
        }
        else
        {
            continue;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> visited(arr.size(),0);
    vector<int> subset;
    vector<vector<int>> allsubsets;
    Permutations(arr,visited,allsubsets,subset);
    for(auto& it:allsubsets)
    {
        for(auto& i:it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}