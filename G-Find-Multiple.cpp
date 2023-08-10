#include<bits/stdc++.h>
using namespace std;

bool is_multiple(int a,int b)
{
	if( a % b == 0 ) return true;
	else return false; 
}

int main()
{
	int a,b,c; cin >> a >> b >> c;
	bool flag = 0;
	for ( int i = a; i <= b; i++)
	{
		if(is_multiple(i , c))
		{
			cout << i << endl;
			flag = 1;
			break;
		} 

	}
	if( !flag )
	{
		cout << -1 << endl;
	}
	return 0;
}