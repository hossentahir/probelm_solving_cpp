#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s; cin >> s;
	int len = s.length();
	int sum_of_string = 0;
	if(len == 1)
	{
		cout << 0 << endl;
		return 0;
	}
	for(int i = 0; i < len; i++)
	{
		sum_of_string += s[i] - '0';
	}
	int cnt = 1;

		int sum = sum_of_string;
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

	return 0;
}
