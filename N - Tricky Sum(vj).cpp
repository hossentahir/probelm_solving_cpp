#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long sum_of_n = ((long long) n * (n+1)) / 2;
		int pow_of_2 = 0;
		for(int i = 1; i <= n; i*=2)
		{
			pow_of_2 += i;
		}
		cout << sum_of_n - 2 * pow_of_2 << endl;
	}

	return 0;
}

// shohag vaiya er video + solution dekhe bujhsi
