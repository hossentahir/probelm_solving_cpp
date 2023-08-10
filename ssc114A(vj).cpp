#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int arr1[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	int arr2[n];
	for(int i = 0; i < n; i++)
	{
		arr2[i] = arr1[i];
	}
	sort(arr1, arr1 + n);
	for(int i = 0; i < n; i++)
	{
		if(arr2[i] != arr1[i])
		{
			cout << "No" <<endl;
			return 0;
		}
	}
	cout << "Yes" <<endl;
	return 0;
}
