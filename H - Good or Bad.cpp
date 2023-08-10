#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
char s[N];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>s;
        int len = strlen(s);
        int flag=0;
        for(int i=0;i<len;i++)
        {
            if(i+2<len and s[i]=='1' and s[i+1]=='0' and s[i+2]=='1' or i+2<len and s[i]=='0' and s[i+1]=='1' and s[i+2]=='0')
            {
                cout<<"Good"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            cout<<"Bad"<<endl;
        }
    }

    return 0;
}
