#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;cin>>s;
        string temp=s;
        int len = s.length();
        for(int i=0;i<len/2;i++)
        {
            swap(s[i],s[len-1-i]);
        }
        if(temp==s)
        cout<<"Yes! It is palindrome!"<<endl;
        else cout<<"Sorry! It is not palindrome!"<<endl;

    }
    return 0;
}
