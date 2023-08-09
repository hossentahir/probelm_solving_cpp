#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t,n;cin>>s>>t;
    int lenS=s.length();
    int lent=t.length();

    cout<<lenS<<" "<<lent<<endl;

    cout<<s+t<<endl;

    swap(s[0],t[0]);
    cout<<s<<" "<<t;



    return 0;
}
