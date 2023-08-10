#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        int sum=0;
        bool flag=0;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                sum+=arr[i];
                flag=1;
            }

        }
        if(!flag) cout<<-1<<endl;
        else cout<<sum<<endl;
    }
    return 0;
}
