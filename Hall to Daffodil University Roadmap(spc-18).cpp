#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int len = s.length();
        for(int i = 0; i < len; i++)
        {
            if(s[len-i-1]=='S' or s[len-i-1]=='B') cout<<s[len-1-i];
            else if(s[len-i-1]=='R') cout<<'L';
            else cout<<'R';
        }
        cout<<endl;
    }
    return 0;
}
