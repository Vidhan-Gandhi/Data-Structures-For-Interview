//Combination Sum
//Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
//you may choose the same number from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

#include <bits/stdc++.h>
using namespace std;

void CombinationSum(vector<int>& arr, int index, vector<int>& subset, vector<vector<int>>& allcombination,int target)
{
    if(target<0 || index==arr.size())
    {
        return;
    }
    if(target==0)
    {
        allcombination.push_back(subset);
        return;
    }
    subset.push_back(arr[index]);
    CombinationSum(arr,index,subset,allcombination,target-arr[index]);
    subset.pop_back();
    CombinationSum(arr,index+1,subset,allcombination,target);
}

int main()
{
    int target=7;
    vector<int> arr = {2,3,6,7};
    vector<int> subset;
    vector<vector<int>> allcombination;
    CombinationSum(arr,0,subset,allcombination,target);
    for(auto& it:allcombination)
    {
        for(auto& i:it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}