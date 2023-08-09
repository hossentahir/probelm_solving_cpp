#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        char c;
        cin >> c;
        cin.ignore();

        if(c >= 'a' && c <= 'z')
            cout << "Lowercase Character" << endl;
        else if (c >= 'A' && c <= 'Z')
            cout << "Uppercase Character" << endl;
        else if (c >= '0' && c <= '9')
            cout << "Numerical Digit" << endl;
        else
            cout << "Special Characters" << endl;
    }

    return 0;
}
