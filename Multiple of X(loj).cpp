#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,n;cin>>x>>n;
        for(int i=1;i<n;i++)
        {
            int str=i*x;
            if(str<=n) cout<<str<<'\n';
            else break;
        }
        if(x>n) cout<<"Invalid!"<<'\n';
        cout<<'\n';
    }
    return 0;
}
