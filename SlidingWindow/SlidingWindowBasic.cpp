// Sliding window is of 2 types: Fixed size and variable size. In fixed size, the window size is fixed and we move the window by one element at a time. In variable size, the window size can change based on the condition. We can use sliding window technique to solve problems related to subarrays or substrings.

//Fixed size sliding window
//Tempelate for fixed size sliding window
#include <bits/stdc++.h>
using namespace std;
int fixedSizeSlidingWindow(vector<int>&arr,int k){
    int start=0;
    int maxvar=INT_MIN;
    int var=0;
    for(int end=0;end<arr.size();end++){
        var+=arr[end]; //Add the current element to the window
        if(end-start+1==k){//If the window size is equal to k, we can calculate the max value and shrink the window from the start
            maxvar=max(maxvar,var);
            var-=arr[start];//Shrink the window from the start
            start++;
        }
    }
    return maxvar;
}