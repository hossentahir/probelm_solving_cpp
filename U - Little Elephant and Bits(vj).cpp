#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s; cin >> s;
	int len = s.length();
	int on_bit = 0;
	for(int i = 0; i < len; i++)
	{
		if(s[i] == '1')
		{
			on_bit++;
		}
	}
	if(on_bit == len)
	{
		for(int i = 0; i < len - 1; i++)
		{
			cout << 1;
		}
	}
	else
	{
		bool flag = 1;
		for(int i = 0; i < len; i++)
		{
			if(s[i] == '0' and flag == 1)
			{
				flag = 0;
				continue;
			}
			cout << s[i];
		}
	}
	return 0;
}
