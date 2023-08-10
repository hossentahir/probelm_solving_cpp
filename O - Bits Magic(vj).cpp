 #include<bits/stdc++.h>
 using namespace std;

 unsigned int set_kth_bit(unsigned int x, int k)
 {
 	return (1 << k) | x;
 }

 void solve()
 {
 	unsigned int x; cin >> x;
 	int k; cin >> k;
 	cout << set_kth_bit(x,k) << endl;
 }

 int main()
 {
 	int t; cin >> t;
 	while(t--)
 	{
 		solve();
 	}
 	return 0;
 }
