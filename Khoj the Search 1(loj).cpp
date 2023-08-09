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
        int strFirstIndex;
        for(int i = 0; i<s1len; i++)
        {
            int len = 0;
            int k = i; //0
            for(int j = 0; j<s2len; j++)//
            {

                if(s1[i]==s2[j]) strFirstIndex = i;

                //cout<<k<<" ";
                if(s1[k++]==s2[j])
                {
                    len++;
                    if(len==s2len)
                    {
                        cout<<strFirstIndex<<endl;
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
        //if(flag) cout<<str<<endl;

    }
    return 0;
}
