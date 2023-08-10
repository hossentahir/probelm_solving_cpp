#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}

int main()
{
	int n; cin >> n;
	int almst_prime = 0;
	for(int i = 6; i <= n; i++)
	{
		int cnt = 0;
		for(int j = 2; j <= n; j++)
		{
			if(is_prime(j))
			{
				if(i % j == 0)
				{
					cnt++;
				}
			}

		}
		if(cnt >= 2)
		{
			almst_prime++;
		}
	}
	cout << almst_prime << endl;

	return 0;
}
