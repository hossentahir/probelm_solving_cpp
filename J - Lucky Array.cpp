#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    int mn=1e5;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i =0;i<n;i++)
    {
        mn=min(mn,arr[i]);
    }
    int count=0;
    for(int i =0;i<n;i++)
    {
        if(mn==arr[i])count++;
    }
    if(count%2==0) cout<<"Unlucky"<<endl;
    else cout<<"Lucky"<<endl;

    return 0;
}
