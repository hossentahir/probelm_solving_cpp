#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s1,s2; cin>>s1>>s2;//theygaveabigpartyforme veabigpartyforme
        int s1len = s1.length();
        int s2len = s2.length();

        for(int i = 0; i<=s1len; i++)//for(int i = 0; i<=s1len-s2len; i++)  eita use korle kono extra lav hobe nah!
        {
            int len = 0;
            for(int j = i; j<i+s2len; j++)//6
            {
                if(s1[j]==s2[j-i])//0
                {
                    len++;
                    if(len==s2len)
                    {
                        cout<<i<<endl;
                        break;
                    }

                }
                else
                {
                    break;
                }

            }
            if(len==s2len)
            {
                break;
            }
        }

    }
    return 0;
}
//kom veriable nia kaj korte pari ei khane!
