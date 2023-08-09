#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c; cin >> a >> b >> c;
	bool flag = 0;
	for( int i = 0; i <= c; i++ )
	{
		for( int j = 0; j <= c; j++ )
		{
			if(i * a + j * b == c)
			{
				cout << "Yes" << endl;
				flag = 1;
				break;
			}
		}
		if(flag) break;
	}
	if ( !flag )
	{
		cout << "No" << endl;
	}
	return 0;
}
