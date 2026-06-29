//Can Attend Meetings
//logic : We can sort the intervals based on the start time and then check if there is any overlap between the intervals. If there is an overlap, we return false, otherwise we return true.
//url: https://leetcode.com/problems/meeting-rooms/description/
# include <bits/stdc++.h>
using namespace std;

bool canAttendMeetings(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<intervals.size()-1;i++){
        if(intervals[i][1]>intervals[i+1][0]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<vector<int>> intervals={{5,10},{15,20}};
    cout<<canAttendMeetings(intervals);
}