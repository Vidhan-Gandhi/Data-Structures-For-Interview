#include <bits/stdc++.h>
using namespace std;

vector<int> TwoSum(vector<int>& nums, int target)
{
    int start=0;
    int end=nums.size()-1;
    while(start<end)
    {
        if(nums[start]+nums[end]==target)
        {
            return {start,end};
        }
        else if(nums[start]+nums[end]<target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
}

int main()
{
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> result=TwoSum(nums,target);
    cout<<result[0]<<" "<<result[1]<<endl;
}