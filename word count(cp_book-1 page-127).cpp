#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;getline(cin,s);
        int len=s.length(),i=0,start=0;
        while(i<len)
        {
            if(s[i]>='a' and s[i]<='z' or s[i]>='A' and s[i]<='Z' or s[i]>='0' and s[i]<='9' )
            {
                if(start==0 and s[i]>='a' and s[i]<='z')
                {
                    cout<<(char)('A' + (s[i]-'a'));
                }
                else cout<<s[i];

                start=1;
            }
            if(s[i]==' ' and start==1)
            {
                start=0;
                cout<<endl;
            }
            i++;
        }
    }
    return 0;
}
