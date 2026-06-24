//Problem Maximum Sum Subarray of Size K (Sliding Window Technique)
//logic: We can use sliding window technique to solve this problem. We will maintain a window of size k and keep track of the sum of the elements in the window. We will keep track of the maximum sum we have seen so far and return it at the end.
//url: https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/description/
#include <bits/stdc++.h>
using namespace std;

int maximumSumSubarrayOfSizeK(vector<int>&arr,int k){
    int start=0;
    int maxlen=INT_MIN;
    int windowsum=0;
    for(int end=0;end<arr.size();end++){
        windowsum+=arr[end];
        if(end-start+1==k){
            maxlen=max(maxlen,windowsum);
            windowsum-=arr[start];
            start++;
        }
    }
    return maxlen;
}
int main(){
    vector<int>arr={2,1,5,1,3,2};
    int k=3;
    cout<<maximumSumSubarrayOfSizeK(arr,k);
}