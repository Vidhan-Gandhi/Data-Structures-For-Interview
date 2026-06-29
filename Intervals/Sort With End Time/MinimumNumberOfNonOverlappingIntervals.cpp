// Problem: Minimum Number of Non-Overlapping Intervals
// Link: https://leetcode.com/problems/non-overlapping-intervals/
// Logic: We can sort the intervals based on the end time and then iterate through the intervals and check if the start time of the current interval is greater than or equal to the end time of the previous interval. If it is, we update the end time to the end time of the current interval. If it is not, we increment the count of overlapping intervals. At the end, we return the total number of intervals minus the count of overlapping intervals.

# include <bits/stdc++.h>
using namespace std;

int minimumnumberofnonoverlappingintervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end(),[](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];});
    int count=0;
    int end=INT_MIN;
    for(int i=0;i<intervals.size();i++){
        if(intervals[i][0]>=end){
            end=intervals[i][1];
        }
        else{
            count++;
        }
    }
    return intervals.size()-count;
}

int main(){
    vector<vector<int>> intervals={{1,2},{2,3},{3,4},{1,3}};
    cout<<minimumnumberofnonoverlappingintervals(intervals);
}