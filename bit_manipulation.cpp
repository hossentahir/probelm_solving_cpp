#include<bits/stdc++.h>
using namespace std;

bool check_kth_bit(int x, int k)
 {
 	return (x >> k) & 1;
 }

void print_off_bits(int x)
 {
 	for(int k = 0; k < 32; k++)
 	{
 		if(!check_kth_bit(x,k))
 		{
 			cout << k << " ";
 		}
 	}
 	cout << endl;
 }

 int set_kth_bit(int x,int k)
 {
 	return(x | (1 << k));
 }

 int unset_kth_bit(int x,int k)
 {
 	return(x & (~(1 << k)));
 }

void solve(int x, int k)
{
	print_off_bits(x);
	cout << check_kth_bit(x,k) << endl;
	cout << set_kth_bit(x,k) << endl;
	cout << unset_kth_bit(x,k) << endl;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int x, k; cin >> x >> k;
		solve(x,k);
	}

	return 0;
}
