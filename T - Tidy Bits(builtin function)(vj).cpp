#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x; cin >> x;
	int bit = __builtin_popcount(x);
	cout << (1 << bit) - 1 << endl;
	return 0;
}
