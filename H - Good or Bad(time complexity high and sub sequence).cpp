#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        char s[N];cin>>s;
        int len=strlen(s);
        int flag=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='1')
            {
                for(int j=i+1;j<len;j++)
                {
                    if(s[j]=='0')
                    {
                        for(int z=j+1;z<len;z++)
                        {
                            if(s[z]=='1')
                            {
                                cout<<"Good"<<endl;
                                flag=1;
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
            else if(s[i]=='0')
            {
                for(int j=i+1;j<len;j++)
                {
                    if(s[j]=='1')
                    {
                        for(int z=j+1;z<len;z++)
                        {
                            if(s[z]=='0')
                            {
                                cout<<"Good"<<endl;
                                flag=1;
                                break;
                            }
                        }
                        break;
                    }
                }
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
