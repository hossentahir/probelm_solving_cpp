#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int len = s.length();
        char arr[len+1];
        for(int i=1;i<=len;i++)
        {
             arr[i] = 'A'+i-1;
        }
        for(int i=0;i<len;i++)
        {
            int key=s[i];
            for(int j=1;j<=len;j++)
            {
                if(key==arr[j])
                {
                    cout<<j;
                    break;
                }
            }
        }
        cout<<endl;


    }
    return 0;
}
