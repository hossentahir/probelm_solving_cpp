#include<bits/stdc++.h>
using namespace std;

bool check_kth_bit(int x, int k)
{
	return (x >> k) & 1;
}

int main()
{
	int n, l, r, x;
	cin >> n >> l >> r >> x;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	// for(int i = 0; i < n; i++) cout << arr[i]<<" ";
	// cout << endl;
	int first, last;
	int ans = 0;
	for(int mask = 0; mask < (1 << n); mask++)
	{
		int cnt = 0;
		int sum = 0;
		for(int k = 0; k < n; k++)
		{
			if(check_kth_bit(mask,k))
			{
				cnt++;
			}
		}
		if(cnt >= 2)
		{
			bool flag1 = 1;
			bool flag2 = 1;
			int mx = 0;
			int mn = 1e9 + 1;
			for(int i = 0; i < n; i++)
			{
				if(check_kth_bit(mask,i) && (flag1 == 1))
				{
					first = arr[i];
					flag1 = 0;
					 // cout << "mask = "<< mask << endl;
					 // cout << "i = "<< i << endl;
					 // cout << "first = "<< first << endl;
					 // cout <<"First mask end"<< endl;
				}
				if(check_kth_bit(mask, n - i - 1) && (flag2 == 1))
				{
					last = arr[n - i - 1];
					flag2 = 0;
					 // cout << "mask = "<< mask << endl;
					 // cout << "i = "<< i << endl;
					 // cout << "last = "<< last << endl;
					 // cout <<"last mask end"<< endl;
				}
				if(check_kth_bit(mask, i))
				{
					sum += arr[i];
				}


			}
			int diff = last - first;
			// cout << "diff = "<< diff << endl;
			// cout << "Sum = " << sum << endl;
			// cout <<"l = "<< l <<" r = "<< r <<" x = "<< x <<endl;
			if(diff >= x && (sum >= l && sum <= r))
			{
 				ans++;
			}
		}
	}
	cout << ans << endl;

	return 0;
}
