#include<bits/stdc++.h>
using namespace std;

bool check_kth_bit(int x, int k)
{
	return (x >> k) & 1;
}

void solve()
{
	unsigned int x, ans; cin >> x;
	ans = 0;
	int j;
	for(int k = 31, j = 0; k >= 0; k--, j++)
	{
		if(check_kth_bit(x, k))
		{
			ans += (1 << j);
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

