#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s; getline(cin,s);
        int len = s.length();
        char c;cin>>c;
        cin.ignore();
        int count=0;
        bool flag = 1;
        for(int i=0;i<len;i++)
        {
            if(s[i]==c)
            {
                count++;
                flag=0;
            }
        }
        if(!flag)
        cout<<"Occurrence of '"<<c<<"' in '"<<s<<"' = "<<count<<endl;
        else cout<<"'"<<c<<"' is not present"<<endl;
    }
    return 0;
}
