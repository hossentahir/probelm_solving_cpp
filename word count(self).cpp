#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int len=s.length();
        int word=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]==' ' and s[i+1]!=' ') word++;
        }
        cout<<word+1<<endl;

    }
    return 0;
}
