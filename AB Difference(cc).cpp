#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;cin>>a>>b;
    int sum=(a*b)-(a+b);
    if(sum<0) cout<<sum*-1<<endl;
    else cout<<sum<<endl;
    return 0;
}
