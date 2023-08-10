#include<bits/stdc++.h>
using namespace std;

bool check_kt_bit(int x, int k)
{
	return (x >> k) & 1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int cnt = 0;
		for(int x = 1; x <= n; x++)
		{
			for(int k = 0; k < 32; k++)
			{
				if(check_kt_bit(x,k))
				{
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
