#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        double a,b,c;cin>>a>>b>>c;
        double s,r;
        s=(a+b+c)/2;
        r=s*(s-a)*(s-b)*(s-c);
        cout<<fixed<<setprecision(2)<<sqrt(r)<<endl;
    }
    return 0;
}
