#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<string>& subset)
{
    for(auto& it:subset)
    {
        int start=0;
        int end=it.size()-1;
        while(start<=end)
        {
            if(it[start]!=it[end])
            {
                return false;
            }
            start++;
            end--;
        }
    }
    return true;
}


void PalindromePartioning(string& s, int index,vector<string>& subset, vector<vector<string>>& allpartition)
{
    if(index==s.size())
    {
        if(isPalindrome(subset))
        {
            allpartition.push_back(subset);
        }
        return;
    }
    
    // FIX: Convert the single char to a string before pushing
    subset.push_back(string(1, s[index]));
    PalindromePartioning(s,index+1,subset,allpartition);
    subset.pop_back();
    PalindromePartioning(s,index+1,subset,allpartition);
}

int main()
{
    string s="noon";
    vector<string> subset;
    vector<vector<string>> allpartition;
    PalindromePartioning(s,0,subset,allpartition);
    for(auto& it:allpartition)
    {
        for(auto& i:it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}