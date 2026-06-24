// Problem: Given an array of integers and an integer k, find the maximum sum of a subarray of length k with distinct elements.
// Logic: We can use sliding window technique to solve this problem. We will maintain a window of size k and keep track of the sum of the elements in the window. We will also use a hash map to keep track of the frequency of each element in the window. If we encounter a duplicate element, we will shrink the window from the start until we have distinct elements again. We will keep track of the maximum sum we have seen so far and return it at the end.
// URL: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/
#include <bits/stdc++.h>
using namespace std;

int maxdistinctsum(vector<int>&arr,int k){
    int start=0;
    int windowsum=0;
    int maxsum=INT_MIN;
    unordered_map<int,int>visited;
    for(int end=0;end<arr.size();end++){
        if(visited[arr[end]]>0){
            while(visited[arr[end]]>0){
                windowsum-=arr[start];
                visited[arr[start]]--;
                start++;
            }
        }
        else{
            windowsum+=arr[end];
            visited[arr[end]]++;
            if(end-start+1==k){
                maxsum=max(maxsum,windowsum);
                windowsum-=arr[start];
                visited[arr[start]]--;
                start++;
            }
        }
    }
    return maxsum;
}

int main(){
    vector<int>arr={1,2,3,4,5};
    int k=3;
    cout<<maxdistinctsum(arr,k);
}