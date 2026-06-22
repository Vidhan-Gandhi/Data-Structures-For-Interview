//Evaluate reverse polish notation
//problem link: https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
//Logic: We can use stack to solve this problem. We will iterate through the input vector of strings and for each string, we will check if it is an operator or an operand. If it is an operand, we will push it onto the stack. If it is an operator, we will pop the top two elements from the stack, perform the operation and push the result back onto the stack. At the end, the top of the stack will be the final result.

#include <bits/stdc++.h>
using namespace std;

int rpn(vector<string>s){
    stack<string>st;
    for(string ch:s){
        if(ch!="+"&& ch!="-"&&ch!="*"&&ch!="/")
        {
            st.push(ch);
        }
        else
        {
            int a=stoi(st.top());
            st.pop();
            int b=stoi(st.top());
            st.pop();
            if(ch=="+")
            {
                st.push(to_string(b+a));
            }
            else if(ch=="-")
            {
                st.push(to_string(b-a));
            }
            else if(ch=="*")
            {
                st.push(to_string(b*a));
            }
            else if(ch=="/")
            {
                st.push(to_string(b/a));
            }
        }
    }
    return stoi(st.top());
}
int main(){
    vector<string>s={"2","1","+","3","*"};
    cout<<rpn(s);
}