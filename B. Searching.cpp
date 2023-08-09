#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x,flag=0;cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<i<<endl;
            flag=1;
            break;
        }
    }
    if(!flag) cout<<-1<<endl;

    return 0;
}
