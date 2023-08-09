#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        int n,x,k,p;cin>>n>>x>>k>>p;
        if(k<=x)
        {
            int sum=0;
            for(int i=0;i<k;i++)
            {
                sum+=10;
            }
            sum+=80;
            cout<<sum<<endl;
        }
        else if(k>x && k<n)
        {
            int sum=0;
            for(int i=0;i<x;i++)
            {
                sum+=10;
            }
            sum+=80;
            for(int i=0;i<k-x;i++)
            {
                sum+=5;
            }
            cout<<sum<<endl;
        }
        else
        {
            int sum=0;
            for(int i=0;i<x;i++)
            {
                sum+=10;
            }
            sum+=80;
            for(int i=0;i<k-x;i++)
            {
                sum+=5;
            }
            sum+=20;
            cout<<sum<<endl;
        }
    }
    return 0;
}
