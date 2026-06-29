// Problem Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/
// Logic: We can sort the intervals based on the end time and then check if there is any overlap between the intervals. If there is an overlap, we continue with the same arrow, otherwise we increase the count of arrows and update the arrow position to the end time of the current interval.
#include <bits/stdc++.h>
using namespace std;

int MinimumNumberOfArrowsToBurstBaloons(vector<vector<int>>& points) {
    sort(points.begin(),points.end(),[](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];});
    int arrow=points[0][1];
    int count=1;
    for(int i=1;i<points.size();i++)
    {
        if(arrow>=points[i][0] && arrow<=points[i][1])
        {
            continue;
        }
        else
        {
            count++;
            arrow=points[i][1];
        }
        
    }
    return count;
}

int main(){
    vector<vector<int>> points={{10,16},{2,8},{1,6},{7,12}};
    cout<<MinimumNumberOfArrowsToBurstBaloons(points);
}