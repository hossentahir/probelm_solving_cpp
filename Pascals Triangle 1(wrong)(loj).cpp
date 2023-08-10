#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i = 1; i <= n+1; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(j==1)
                {
                    cout<<1<<" ";
                    continue;
                }
                else cout<<" ";// ei jaigai pascle er number gula ber korte partesi nah!
                if(j==i) cout<<1;

            }
            cout<<endl;
        }
    }
    return 0;
}
