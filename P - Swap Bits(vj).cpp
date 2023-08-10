#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int x; cin >> x;
	int Ans = 0;
	for(int k = 0; k < 32; k += 2)
	{
		int a, b;
		a = (x >> k) & 1;
		b = (x >> (k + 1)) & 1;
		swap(a, b);
		if(a)
		{
			Ans += (1 << k);
		}
		if(b)
		{
			Ans += (1 << (k+1));
		}
	}
	cout << Ans << endl;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
