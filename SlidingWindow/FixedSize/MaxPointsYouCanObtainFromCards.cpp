// Problem: Max Points You Can Obtain from Cards
// logic: We can use sliding window technique to solve this problem. We will maintain a window of size n-k and keep track of the sum of the elements in the window. We will keep track of the minimum sum we have seen so far and return total sum - minimum sum at the end.
// url: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards

#include <bits/stdc++.h>
using namespace std;

int maxpoints(vector<int>&cardPoints,int k){
    int start=0;
    int minval=INT_MAX;
    int windowsum=0;
    int total=0;
    for(int end=0;end<cardPoints.size();end++){
        windowsum+=cardPoints[end];
        total+=cardPoints[end];
        if(end-start+1==cardPoints.size()-k){
            minval=min(minval,windowsum);
            windowsum-=cardPoints[start];
            start++;
        }
    }
    return total-minval;
}

int main(){
    vector<int>cardPoints={1,2,3,4,5,6,1};
    int k=3;
    cout<<maxpoints(cardPoints,k);
}