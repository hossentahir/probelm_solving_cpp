#include<bits/stdc++.h>
using namespace std;

int main()
{
	int number; cin >> number; 
	if ( number >= 0 and number <= 9 ) cout << "000" << number << endl;
	else if ( number >= 10 and number  <= 99 ) cout << "00" << number << endl;
	else if ( number >= 100 and number <= 999 ) cout << 0 << number << endl;
	else if ( number >= 1000 and number <= 9999 ) cout << number << endl;

	return 0;
}