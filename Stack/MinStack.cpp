//Min Stack
//problem url: https://leetcode.com/problems/min-stack/
//Logic: We can use two stacks to solve this problem. The first stack (st) will be used to store all the elements of the stack, while the second stack (minstack) will be used to keep track of the minimum element at each level of the stack. Whenever we push a new element onto the main stack, we compare it with the current minimum (the top of minstack) and push the smaller of the two onto minstack. When we pop an element from the main stack, we also pop from minstack to ensure that it always has the minimum element corresponding to the current state of the main stack. This way, we can retrieve the minimum element in constant time using getmin().

#include <bits/stdc++.h>
using namespace std;


stack<int>st;
stack<int>minstack;


void push(int x){
    st.push(x);
    if(minstack.empty())
    {
        minstack.push(x);
    }
    else
    {
        minstack.push(min(minstack.top(),x));
    }
}
void pop(){
    st.pop();
    minstack.pop();
}
int top(){
    return st.top();
}
int getmin(){
    return minstack.top();
}
int main(){
    push(3);
    push(5);
    push(6);
    pop();
     cout<<top()<<endl;
    cout<<getmin();
}