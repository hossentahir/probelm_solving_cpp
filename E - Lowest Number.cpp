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
    int mn=arr[0];
    for(int i=1;i<n;i++)
    {
        mn=min(mn,arr[i]);

    }
    for(int i=0;i<n;i++)
    {
        if(mn==arr[i])
        {
            cout<<mn<<" "<<i+1<<endl;
            break;
        }

    }

    return 0;
}
