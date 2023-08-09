#include<bits/stdc++.h>
#define N 1000000+100
using namespace std;


int main()
{
     char s[N];
     cin.get(s,N);
     for(int i=0;i<strlen(s);i++)
     {
         if(s[i]=='\\') return 0;
         else cout<<s[i];

     }
    return 0;
}
