#include <bits/stdc++.h>
using namespace std;

bool RansomNote(string& ransomnote, string& magazine)
{
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;
    for(auto& it:ransomnote)
    {
        mp1[it]++;
    }
    for(auto& it:magazine)
    {
        mp2[it]++;
    }
    for(auto& it:ransomnote)
    {
        if(mp1[it]<=mp2[it])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string ransomnote="aac";
    string magazine="aab";
    if(RansomNote(ransomnote,magazine))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}