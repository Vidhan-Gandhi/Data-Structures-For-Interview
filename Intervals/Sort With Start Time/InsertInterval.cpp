// Problem: Insert Interval
// Link: https://leetcode.com/problems/insert-interval/
// Logic: We can sort the intervals based on the start time and then check if there is any overlap between the intervals. If there is an overlap, we merge the intervals and return the merged intervals at the end.
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>insertinterval(vector<vector<int>>& intervals, vector<int>& newInterval)
{
    vector<vector<int>> ans;
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end());
    for(auto& it:intervals){
        if(ans.empty()|| ans.back()[1]<it[0])
        {
            ans.push_back(it);
        }
        else{
            ans.back()[1]=max(ans.back()[1],it[1]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<vector<int>> intervals={{1,3},{6,9}};
    vector<int> newInterval={2,5};
    vector<vector<int>> ans=insertinterval(intervals,newInterval);
    for(auto& it:ans){
        cout<<"["<<it[0]<<","<<it[1]<<"] ";
    }
}