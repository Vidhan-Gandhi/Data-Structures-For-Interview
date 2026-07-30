#include <bits/stdc++.h>    
using namespace std;

bool ContainsDuplicate(vector<int>& nums, int k)
{
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++)
    {
        int val=nums[i];
        if(mp.find(val)!=mp.end() && i-mp[val]<=k)
        {
            return true;
        }
        mp[val]=i;
    }
    return false;
    
} 

int main()
{
    vector<int> nums={1,2,1,3,4,2};
    int k=3;
    if(ContainsDuplicate(nums,k))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}