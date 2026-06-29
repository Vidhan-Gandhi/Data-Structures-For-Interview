#include <bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<vector<int>> ans;
    
    for(auto& it : nums)
    {
        if(ans.empty() || (long long)it != (long long)ans.back()[1] + 1)
        {
            ans.push_back({it, it});
        }
        else
        {

            ans.back()[1] = it;
        }
    }
    vector<string> answer;
    
    for(auto& it:ans)
    {
        if(it[0] == it[1])
        {
            answer.push_back(to_string(it[0]));
        }
        else
        {
            answer.push_back(to_string(it[0])+"->"+to_string(it[1]));
        }
        
    }
    return answer;
}

int main()
{
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> ans = summaryRanges(nums);
    for(auto& it:ans)
    {
        cout << it << " ";
    }
}