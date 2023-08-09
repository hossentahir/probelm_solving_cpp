#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int arr[n];
	int mx = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(i == 0) continue;
		mx = max(mx, arr[i]);
	}
	if(arr[0] == mx) cout << 1 << endl;
	else if(arr[0] > mx) cout << cout << 0 << endl;
	else cout << mx - arr[0] + 1 << endl;

	return 0;
}
