#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        double x,x1,y,y1;cin>>x>>x1>>y>>y1;
        string s;
        s = (x/x1==y/y1)? "EQUAL" : ((x/x1>y/y1)? "HE" : "YOU");
        cout<<s<<endl;
    }
    return 0;
}
