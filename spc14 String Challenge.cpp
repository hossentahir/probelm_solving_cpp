#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s; cin>>s;
        char c;cin>>c;
        int len = s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]!=c) cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
