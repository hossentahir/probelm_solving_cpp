#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        int n;cin>>n;
        int arr[n-1];

        for(int i = 0; i < n-1; i++) cin>>arr[i];
        for(int i = 1; i <= n; i++)
        {
            bool flag = 0;

            for(int j = 0; j < n-1; j++)
            {
               if(arr[j]==i)
               {
                   flag = 1;
                   break;
               }
            }
            if(!flag)
            {
                cout<<i<<'\n';
                break;
            }

        }

    }
    return 0;
}
