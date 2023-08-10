#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();

    while(t--)
    {
        string s; getline(cin,s);
        int len = s.length();int cnt=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') cnt++;
            //if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
