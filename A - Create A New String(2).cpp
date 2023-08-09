#include<bits/stdc++.h>
using namespace std;
#define N 1005

int main()
{
    string s,t;cin>>s>>t;
    //cout<<strlen(s)<<" "<<strlen(t)<<endl; eita use kora hoi jokhon character string use kora hoi

    //cout<<s<<" "<<t; eita dia o kora jai

    cout<<s.length()<<" "<<t.length()<<endl;

    for(int i=0;i<s.length();i++) cout<<s[i];
    cout<<" ";
    for(int i=0;i<t.length();i++) cout<<t[i];
    cout<<endl;
    return 0;
}
