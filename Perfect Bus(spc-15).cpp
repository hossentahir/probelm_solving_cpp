#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n==4)
        {
            cout<<"yes"<<endl;
            continue;
        }
        int check;
        check =  n/4;
        if(check%2==1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
