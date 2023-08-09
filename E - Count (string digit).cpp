#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;//+1;

int main()
{
    char s[N];cin>>s;
    int len,sum=0;
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        sum+=s[i]-'0';
    }
    cout<<sum<<endl;
    return 0;
}
