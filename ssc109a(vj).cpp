#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;cin>>N;
    char arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    int n,s,u;
    n=s=u=0;
    for(int i=0;i<N;i++)
    {
       if('N'==arr[i]) n++;
    }
    for(int i=0;i<N;i++)
    {
       if('S'==arr[i]) s++;
    }
    for(int i=0;i<N;i++)
    {
       if('U'==arr[i]) u++;
    }
    cout<<min(min(n,s),u);
    return 0;
}
