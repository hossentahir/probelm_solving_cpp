#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int len = s.length();
        for(int i=0;i<len/2;i++)
        {
            swap(s[i],s[len-i-1]);
        }
        cout<<s<<endl;
    }

    return 0;
}
