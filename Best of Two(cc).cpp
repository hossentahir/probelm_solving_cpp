#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        int a1,a2,a3,b1,b2,b3;cin>>a1>>a2>>a3>>b1>>b2>>b3;

        //For Alice
        if(a1>a2) swap(a1,a2);
        if(a1>a3) swap(a1,a3);
        if(a2>a3) swap(a2,a3);
        //For Bob
        if(b1>b2) swap(b1,b2);
        if(b1>b3) swap(b1,b3);
        if(b2>b3) swap(b2,b3);

        int sum1,sum2;
        sum1=a2+a3; sum2=b2+b3;

        if(sum1>sum2) cout<<"Alice"<<endl;
        else if(sum1<sum2) cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
    }
    return 0;
}
