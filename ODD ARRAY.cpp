#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,neg=0;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0) neg++;
        }
        if(neg%2==0) cout<<0<<endl;
        else cout<<1<<endl;

    }
    return 0;
}
