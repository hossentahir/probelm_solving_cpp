#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        int n,m;cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                cout<<m<<" ";

            cout<<endl;
        }
        for(int i=n-1;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
                cout<<m<<" ";

            cout<<endl;
        }
        cout<<endl;

    }
    return 0;
}
