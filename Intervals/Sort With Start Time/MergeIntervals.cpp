#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>mergeintervals(vector<vector<int>>& intervals){
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    for(auto& it:intervals){
        if(ans.empty()|| ans.back()[1]<it[0])
        {
            ans.push_back(it);
        }
        else{
            ans.back()[1]=max(ans.back()[1],it[1]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans=mergeintervals(intervals);
    for(auto& it:ans){
        cout<<"["<<it[0]<<","<<it[1]<<"] ";
    }
}