#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--)
    {
        int x;cin>>x;
        int count=0;
        for(int i=1;i<=x;i++)
        {
            if(x%i==0) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
