// Minimum Size Subarray Sum
// logic: We can use sliding window technique to solve this problem. We will maintain a window and keep track of the sum of the elements in the window. We will keep track of the minimum length of the subarray that has a sum greater than or equal to the target and return it at the end.
// url: https://leetcode.com/problems/minimum-size-subarray-sum/description/

#include <bits/stdc++.h>
using namespace std;

int minsizesubarray(vector<int>&arr,int target){
    int start=0;
    int windowsum=0;
    int minlen=INT_MAX;
    for(int end=0;end<arr.size();end++){
    
        if(windowsum>=target){
            while(windowsum>=target){
                minlen=min(minlen,end-start+1);
                windowsum-=arr[start];
                start++;
            }
        }
        else{
            windowsum+=arr[end];
        }
    }
    if(minlen==INT_MAX){
        return 0;
    }
    return minlen;
}


int main(){
    vector<int>arr={2,3,1,2,4,3};
    int target=7;
    cout<<minsizesubarray(arr,target);
}