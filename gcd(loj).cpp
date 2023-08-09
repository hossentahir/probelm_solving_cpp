#include<bits/stdc++.h>
using namespace std;

int gcd(int num1,int num2)
{
    int mx= max(num1,num2);
    int mn=min(num1,num2);
    num1=mx;
    num2=mn;
    while(num2!=0)
    {
        int rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    return num1;
}
int lcm(int num1,int num2)
{
    return (num1*num2)/gcd(num1,num2);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int num1,num2;cin>>num1>>num2;
        cout<<"gcd id "<<gcd(num1,num2)<<endl;
        cout<<"lcm is "<<lcm(num1,num2)<<endl;

    }
    return 0;
}
