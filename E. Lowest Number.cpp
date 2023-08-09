#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) cin>>arr[i];
    int mn;
    mn=arr[0];
    for(int i=1;i<size;i++)
    mn=min(mn,arr[i]);
    cout<<mn<<" ";
    for(int i=0;i<size;i++)
    {
        if(mn==arr[i])
        {
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}


