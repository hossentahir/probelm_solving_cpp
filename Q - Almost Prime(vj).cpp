#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool almost_prime(int n)
{
	int cnt = 0;
	for(int i = 2; i <= n; i++)
	{
		if(n % i == 0)
		{
			if(is_prime(i))
			{
				cnt++;
			}
		}
	}
	if(cnt == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n; cin >> n;
	int cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		if(almost_prime(i))
		{
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}
