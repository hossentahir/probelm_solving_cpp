#include<bits/stdc++.h>
using namespace std;
void wordCount()
{
        string s;getline(cin,s);
        int len = s.length();
        int count = 0;
        for(int i=0;i<len;i++)
        {
            if(s[i]==' ') count++;
        }
        cout<<"Count = "<<count+1<<endl;
}
void solution()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        wordCount();
    }
}

int main()
{
    solution();
    return 0;
}
