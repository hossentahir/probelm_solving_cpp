#include<bits/stdc++.h>
using namespace std;

bool check_kth_bit(int x, int k)
{
	return (x >> k) & 1;
}

void solve()
{
	unsigned int n; cin >> n;
	unsigned int ans = 0;
	for(int k = 0; k <= 31; k++)
	{
		if(!check_kth_bit(n, k))
		{
			ans += (1 << k);
		}
	}
	cout << ans << endl;
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

