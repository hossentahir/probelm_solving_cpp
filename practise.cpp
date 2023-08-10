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
long long lcm(int num1,int num2)
{
    return  ((long long)num1*num2)/gcd(num1,num2);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(gcd(arr[j],arr[j+1])==lcm(arr[j],arr[j+1])) cnt++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
