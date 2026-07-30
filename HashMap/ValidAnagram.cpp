#include <bits/stdc++.h>
using namespace std;

bool ValidAnagram(string& s, string& t)
{
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;
    for(auto& it:s)
    {
        mp1[it]++;
    }   
    for(auto& it:t)
    {
        mp2[it]++;
    }
    for(auto& it:mp1)
    {
        if(mp1[it.first]!=mp2[it.first])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s="anagrsam";
    string t="nagaram";
    if(ValidAnagram(s,t))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}