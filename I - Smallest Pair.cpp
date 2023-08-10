#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];

        int mn=1e9;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                mn=min(mn,arr[i] + arr[j] + j - i);

            }
        }
        cout<<mn<<endl;
    }


    return 0;
}
