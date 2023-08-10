#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	if(n <= 9)
	{
		cout << 0 << endl;
	}
	else
	{
		int sum = 0;
		while(n > 0)
		{
			int last_digit = n % 10;
			sum += last_digit;
			n /= 10;
		}
		int cnt = 1;
		while(sum >= 10)
		{
			int n = sum;
			sum = 0;
			while (n > 0)
			{
				int last_digit = n % 10;
				sum += last_digit;
				n /= 10;
			}
			cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
