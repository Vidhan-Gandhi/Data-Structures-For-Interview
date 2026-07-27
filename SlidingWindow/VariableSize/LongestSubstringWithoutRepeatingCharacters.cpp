// Problem: Longest Substring Without Repeating Characters
// Logic: We can use sliding window technique to solve this problem. We will maintain a window and keep track of the characters in the window using a hash map. If we encounter a character that is already in the window, we will shrink the window from the start until we have distinct characters again. We will keep track of the maximum length of the window we have seen so far and return it at the end.
// URL: https://leetcode.com/problems/longest-substring-without-repeating-characters

#include <bits/stdc++.h>
using namespace std;
int longestSubstringWithoutRepeatingCharacters(string s) {
    int start=0;
    int maxlen=0;
    int len=0;
    unordered_map<char,int>visited;
    for(int end=0;end<s.length();end++){
        if(visited[s[end]]==0){          // check BEFORE marking
            len++;
            visited[s[end]]=1;
            maxlen=max(maxlen,len);
        }
        else{
            while(visited[s[end]]!=0){
                visited[s[start]]--;
                start++;
                len--;                    // shrink len as window shrinks
            }
            len++;
            visited[s[end]]=1;
            maxlen=max(maxlen,len);
        }
    }
    return maxlen;
}
int main(){
    string s="abcabcbb";
    cout<<longestSubstringWithoutRepeatingCharacters(s);
}