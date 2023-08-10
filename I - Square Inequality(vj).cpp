#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c; cin >> a >> b >> c;
    a = pow(a,2) + pow(b,2);
    c = pow(c,2);
    if(a < c)
    {
    	cout << "Yes" << endl;
    }
    else
    {
    	cout << "No" << endl;
    }

    return 0;
}
