#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;cin>>s;
        int len = s.length();
        int arr[26]={0};
        int a[26];
        for(int i=0;i<len;i++)
        {
            arr[s[i]-'a']++;
        }
        for(int i=0;i<len;i++)
        {
            a[s[i]-'a']=1;
        }

        for(int i=0;i<len;i++)
        {
            if(arr[s[i]-'a']!=0 and a[s[i]-'a']==1)
            {
                cout<<s[i]<<" = "<<arr[s[i]-'a']<<endl;
                a[s[i]-'a']=0;
            }
        }
        if(t)cout << '\n';
    }
    return 0;
}
