#include <bits/stdc++.h>
using namespace std;

bool HappyNumber(int n)
{
    int count=0;
    while(n!=1)
    {
        int sum=0;
        while(n>0)
        {
            int digit=n%10;
            sum+=digit*digit;
            n/=10;
        }
        n=sum;
        sum=0;
        count++;
        if(count>100)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int n=2;
    if(HappyNumber(n))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}