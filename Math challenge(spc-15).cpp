#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        double n,k;cin>>n>>k;
        double double_bag;
        double_bag = n/k;
        if(double_bag<0)
        {
            cout<<-1<<endl;
            break;
        }

        int integer_bag = double_bag;
        if(integer_bag == double_bag) cout<<integer_bag<<endl;
        else cout<<integer_bag+1<<endl;
    }


    return 0;
}
