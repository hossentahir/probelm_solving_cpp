#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int len = s.length();
        char letterArray[30];
        for(int i = 1; i <= 26; i++)
        {
            letterArray[i] = (int)'A' + i - 1;
        }
        letterArray[27] = '\0';

        for(int i=0;i<len;i++)
        {
            char key=s[i];
            for(int i=1;i<=26;i++)
            {
                if(key==letterArray[i])
                {
                    cout<<i;
                    break;
                }
            }


        }
        cout<<endl;




    }
    return 0;
}
