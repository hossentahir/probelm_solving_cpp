#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t --)
    {
        int x, y, z; cin >> x >> y >> z;
        int a1, a2, a3;
        a1 = x * y; //cout<<a1<<" ";
        a2 = y * z; //cout<<a2<<" ";
        a3 = x * z; //cout<<a3<<" ";
        if(a1 % z == 0)
        {
            cout<<a1<<" "<<z<<endl;
        }
        else if(a2 % x == 0)
        {
            cout<<a2<<" "<<x<<endl;
        }
        else if (a3 % y == 0)
        {
            cout<<a3<<" "<<y<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
