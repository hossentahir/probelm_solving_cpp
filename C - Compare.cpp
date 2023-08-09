#include<bits/stdc++.h>
using namespace std;

const int n = 25;

int main()
{
    char s[n],t[n];cin>>s>>t;
    int minlen = min(strlen(s),strlen(t));


    for(int i=0;i<minlen;i++)
    {
        if(s[i]>t[i])
        {
            cout<<t<<endl;
            return 0;
        }
        else if(s[i]<t[i])
        {
            cout<<s<<endl;
            return 0;
        }
    }
    if(strlen(s)>= strlen(t)) cout<< t<<endl;
    else cout<<s<<endl;
    return 0;
}
