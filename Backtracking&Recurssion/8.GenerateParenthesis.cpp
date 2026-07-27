// Problem: Generate Parenthesis
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
// For example, given n = 3, a solution set is:
// [((())()), (()()()), ()()(), ()(()), ((()))]


#include <bits/stdc++.h>
using namespace std;

bool isValid(string& parenthesis)
{
    stack<char> st;
    for(auto& it:parenthesis)
    {
        if(it=='(')
        {
            st.push(it);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}


void GenerateParenthesis(int n,string parenthesis,vector<string>& allparenthesis)
{
    if(parenthesis.size()==2*n)
    {
        if(isValid(parenthesis))
        {
            allparenthesis.push_back(parenthesis);
        }
        return;
    }
    parenthesis.push_back('(');
    GenerateParenthesis(n,parenthesis,allparenthesis);
    parenthesis.pop_back();
    parenthesis.push_back(')');
    GenerateParenthesis(n,parenthesis,allparenthesis);
}

int main()
{
    int n=3;
    string parenthesis="";
    vector<string> allparenthesis;
    GenerateParenthesis(n,parenthesis,allparenthesis);
    for(auto& it:allparenthesis)
    {
        cout << it << endl;
    }
}