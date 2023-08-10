#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v,a,b,c;cin>>v>>a>>b>>c;
    while(v>=0)
    {
        if(v>=a) v-=a;
        else
        {
            cout<<"F"<<endl;
            break;
        }
        if(v>=b) v-=b;
        else
        {
            cout<<"M"<<endl;
            break;
        }
        if(v>=c) v-=c;
        else
        {
            cout<<"T"<<endl;
            break;
        }

    }
    return 0;
}
