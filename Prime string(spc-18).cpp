#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        bool flag = 0;
        int len = s.length();
        for(int i = 0; i < len; i++)
        {
            if(s[i]=='p')
            {
                if(s[i+1]=='r')
                {
                    if(s[i+2]=='i')
                    {
                        if(s[i+3]=='m')
                        {
                            if(s[i+4]=='e')
                            {
                                cout<<"yes"<<endl;
                                flag=1;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(!flag)
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
