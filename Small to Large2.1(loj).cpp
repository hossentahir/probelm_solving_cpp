#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;//9 8 7
        if(a>b) swap(a,b);// 8 9
        if(b>c) swap(b,c);// 7 9
        //if(a>c) swap(a,c);//
        if(a>b) swap(a,b);
        cout << a << " " << b << " " << c << endl;

    }
    return 0;
}
