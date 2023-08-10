#include<bits/stdc++.h>
using namespace std;

int main()
{
	int year; cin >> year;
	for(int i = year + 1; ; i++)
	{
		int n = i;
		int d4 = n % 10;
		n /= 10;
		int d3 = n % 10;
		n /= 10;
		int d2 = n % 10;
		n /= 10;
		int d1 = n % 10;
		if(d1 != d2 and d1 != d3 and d1 != d4 and d2 != d3 and d2 != d4 and d3 != d4)
		{
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
// after watching solution
