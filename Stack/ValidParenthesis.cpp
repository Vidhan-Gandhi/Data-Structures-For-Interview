//Valid Parenthesis
//problem link: https://leetcode.com/problems/valid-parentheses/
//Logic: We can use stack to solve this problem. We will push the opening brackets into the stack and when we encounter a closing bracket, we will check if the top of the stack has the corresponding opening bracket. If it does, we pop it from the stack. If it doesn't or if the stack is empty when we encounter a closing bracket, we return false. At the end, if the stack is empty, we return true, indicating that all brackets were matched correctly.

#include <bits/stdc++.h>
using namespace std;
bool ValidParenthesis(string s){
    stack<int>st;
    for(char ch:s){
        if(ch=='('||ch=='['||ch=='{')
        {
            st.push(ch);
        }
        else
        {
            if(ch==')'&&!st.empty()&&st.top()=='(')
            {
                st.pop();
            }
            else if(ch==']'&&!st.empty()&&st.top()=='[')
            {
                st.pop();
            }
            else if(ch=='}'&&!st.empty()&&st.top()=='{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        
    }
    return st.empty();
}
int main(){
    string s="({)}";
    if(ValidParenthesis(s)){
        cout<<"Valid Parenthesis"<<endl;
    }
    else{
        cout<<"Invalid Parenthesis"<<endl;
    }
}