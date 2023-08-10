#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x; cin >> x;
	int bit = __builtin_popcount(x);
	for(int k = 0; k < 1e6; k++)
    {
        if(__builtin_popcount(k) == bit)
        {
            cout << k << endl;
            break;
        }
    }
	return 0;
}

