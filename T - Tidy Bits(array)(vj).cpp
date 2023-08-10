
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x; cin >> x;
	int arr[21];
	int cnt = 0;
	for(int k = 0; k < 21; k++)
	{
		arr[k] = (x >> k) & 1;
	}
	for(int k = 0; k < 21; k++)
	{
		if(arr[k])
		{
			cnt++;
		}
	}
	cout << (1 << cnt) - 1 << endl;
	return 0;
}
