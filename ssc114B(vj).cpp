#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a; cin >> a;
	if(a == 0)
	{
		cout <<"Yes"<< endl;
		return 0;
	}
	int sum = 0;
	for(int i = 1; i <= 3; i++)
	{
		sum += i;
		if(sum == a)
		{
			cout << "Yes" << endl;
			return 0;
		}
		else if(sum > a)
		{
			cout << "No" << endl;
			return 0;
		}
		if(i == 4)
		{
			i = 0;
		}

	}
	return 0;
}
