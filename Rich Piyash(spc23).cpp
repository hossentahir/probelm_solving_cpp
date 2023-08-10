 #include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int a, b, x;
		cin >> a >> b >> x;
		int i, cnt;
		i = 1;
		cnt = 0;
		while(1)
		{
			if((a + x * i) < b)
			{
				cnt++;
				i++;
				continue;
			}
			break;
		}
		cout << cnt+1 << endl;
	}
	return 0;
}
