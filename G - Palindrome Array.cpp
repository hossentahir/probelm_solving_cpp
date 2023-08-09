#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int flag=0;
    for(int i=0;i<n/2;i++)
    {
        if(!(arr[i]==arr[n-1-i]))
        {
            cout<<"NO";
            flag=1;
            break;
        }
    }
    if(!flag) cout<<"YES";
    return 0;
}
