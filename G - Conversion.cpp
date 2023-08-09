#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;

int main()
{
    char s[N];cin>>s;
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            char x;
            x=s[i] - 32;
            s[i]=x;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            char x;
            x=s[i] + 32;
            s[i]=x;
        }
        else if (s[i]==',')
        {

            s[i]=' ';
        }
    }
    cout<<s;
    return 0;
}
