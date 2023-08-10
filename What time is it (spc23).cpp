#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if((int)s[0] <= (int)('2' - '0') && (int)s[1] <= (int)('4' - '0') && (int)s[3] <= (int)('5' - '0') && (int)s[4] <= (int)('9' - '0'))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
