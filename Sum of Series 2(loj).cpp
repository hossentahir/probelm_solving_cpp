#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        double sum = 0;
        for(int i=1;i<=n;i++)
        {
            sum+=((double)i/tgamma(i+1));
        }
        cout<<fixed<<setprecision(4)<<sum<<endl;

    }
    return 0;
}
