#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int sum1,sum2;
        sum1=sum2=0;
        int a1[5],a2[5];
        for(int i=0;i<5;i++)
        {
            cin>>a1[i];
            sum1+=a1[i];
        }
        for(int i=0;i<5;i++)
        {
            cin>>a2[i];
            sum2+=a2[i];
        }
        if(sum1>sum2) cout<<"sevilla"<<endl;
        else if(sum1<sum2) cout<<"roma"<<endl;
        else cout<<"draw"<<endl;


    }
    return 0;
}
