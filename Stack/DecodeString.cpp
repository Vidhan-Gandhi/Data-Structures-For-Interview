//Decode String
//problem link: https://leetcode.com/problems/decode-string/description/
//Logic: We can use stack to solve this problem. We will iterate through the input string and for each character, we will check if it is an opening bracket, a closing bracket, a digit or a character. If it is an opening bracket, we will push the current number and the current string onto the stack and reset them. If it is a closing bracket, we will pop the top element from the stack, which will give us the number of times we need to repeat the current string and the previous string. We will then concatenate the previous string with the current string repeated the required number of times and set it as the current string. If it is a digit, we will update the current number. If it is a character, we will append it to the current string. At the end, the current string will be the decoded string.
//coverting char to int: num = num * 10 + (ch - '0'); This is a common technique to convert a character representing a digit to its integer value. By subtracting the ASCII value of '0' from the ASCII value of the character, we get the integer value of that character. For example, if ch is '3', then '3' - '0' will give us 3 as an integer. This allows us to build the number as we iterate through the characters in the string.

#include <bits/stdc++.h>
using namespace std;

string DecodeString(string s){
    stack<pair<int,string>>st;
    int num=0;
    string crrstr="";
    for(char ch:s){
        if(ch=='[')
        {
            st.push({num,crrstr});
            num=0;  
            crrstr="";
        }
        else if(ch==']')
        {
            int x=st.top().first;
            string res="";
            while(x!=0)
            {
                res+=crrstr;
                x--;
            }
            crrstr=st.top().second+res;
            st.pop();

        }
        else
        {
            if(isdigit(ch))
            {
                num = num * 10 + (ch - '0');

            }
            else
            {
                crrstr+=ch;
            }
        }
    }
    return crrstr;
}
int main(){
    string s="3[a]2[bc]";
    cout<<DecodeString(s);
}