//PROBLEM: Maximum Number of Non-overlapping Intervals
//LOGIC: Sort the intervals based on their end time and then iterate through the intervals and check if the start time of the current interval is greater than or equal to the end time of the previous interval. If it is, increment the count and update the end time to the end time of the current interval.
# include <bits/stdc++.h>
using namespace std;

int maximumnumberofnonoverlappingintervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end(),[](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];});
    int count=1;
    int end=intervals[0][1];
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]>=end){
            count++;
            end=intervals[i][1];
        }
    }
    return count;
}