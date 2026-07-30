#include <bits/stdc++.h>
using namespace std;

bool LongestConsecutiveSequence(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    int count=1;    
    int maxcount=1;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]==nums[i-1])
        {
            continue;
        }
        else if(nums[i]==nums[i-1]+1)
        {
            count++;
        }
        else
        {
            maxcount=max(maxcount,count);
            count=1;
        }
    }
    return max(maxcount,count);
}


int main()
{
    vector<int> nums={100,4,200,1,3,2};
    cout<<LongestConsecutiveSequence(nums)<<endl;
}