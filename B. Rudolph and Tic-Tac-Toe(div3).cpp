#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        char a1,a2,a3; cin>>a1>>a2>>a3;
        char b1,b2,b3; cin>>b1>>b2>>b3;
        char c1,c2,c3; cin>>c1>>c2>>c3;
        //if(a1=='+' && a2=='+' && a3=='+') cout<<"+"<<endl;
        if(a1=='+' && a2=='+' && a3=='+' or b1=='+' && b2=='+' && b3=='+' or c1=='+' &&
           c2=='+' && c3=='+' or a1=='+' && b1=='+' && c1=='+' or a2=='+' && b2=='+' &&
           c2=='+' or a3=='+' && b3=='+' && c3=='+' or a1=='+' && b2=='+' && c3=='+' or
           a3=='+' && b2=='+' && c1=='+') cout<<"+"<<endl;

        else if (a1=='O' && a2=='O' && a3=='O' or b1=='O' && b2=='O' && b3=='O' or c1=='O' &&
           c2=='O' && c3=='O' or a1=='O' && b1=='O' && c1=='O' or a2=='O' && b2=='O' &&
           c2=='O' or a3=='O' && b3=='O' && c3=='O' or a1=='O' && b2=='O' && c3=='O' or
           a3=='O' && b2=='O' && c1=='O') cout<<"O"<<endl;

        else if (a1=='X' && a2=='X' && a3=='X' or b1=='X' && b2=='X' && b3=='X' or c1=='X' &&
           c2=='X' && c3=='X' or a1=='X' && b1=='X' && c1=='X' or a2=='X' && b2=='X' &&
           c2=='X' or a3=='X' && b3=='X' && c3=='X' or a1=='X' && b2=='X' && c3=='X' or
           a3=='X' && b2=='X' && c1=='X') cout<<"X"<<endl;

        else cout<<"DRAW"<<endl;


    }
    return 0;
}
