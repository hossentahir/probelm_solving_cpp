#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s1,s2;cin>>s1>>s2;
        int len1=s1.length();
        int len2=s2.length();
        int j,c=0;
        for(j=0;j<len2;j++)
        {
            for(int i=0;i<len1;i++)
            {
                if(s2[j]==s1[i])
                {
                    j++;
                    c++;
                }

            }
            if(c==len2)break;
        }
        if(c==len2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
