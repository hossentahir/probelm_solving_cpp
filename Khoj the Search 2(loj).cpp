#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;cin>>s1>>s2;
        int s1Len = s1.length();
        int s2Len = s2.length();
        int cnt = 0;

        for(int i=0; i<=s1Len-s2Len; i++)
        {
            int len=0;
            for(int j=i; j<i+s2Len; j++)
            {
                if(s1[j]==s2[j-i])
                {
                    len++;
                    if(len==s2Len) cnt++;

                }
                else break;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
