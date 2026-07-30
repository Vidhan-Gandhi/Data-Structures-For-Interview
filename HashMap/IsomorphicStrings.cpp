#include <bits/stdc++.h>
using namespace std;

bool isomorphic(string& s, string& t)
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
    vector<int>v1;
    vector<int>v2;
    for(auto& it:mp1)
    {
        v1.push_back(it.second);
    }
    for(auto& it:mp2)
    {
        v2.push_back(it.second);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]!=v2[i])
        {
            return false;
        }
    }
    if(v1.size()!=v2.size())
    {
        return false;
    }
    else if(s.length()!=t.length())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string s="egg";
    string t="aed";
    if(isomorphic(s,t))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}