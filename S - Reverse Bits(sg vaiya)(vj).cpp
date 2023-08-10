 #include<bits/stdc++.h>
 using namespace std;

 bool check_kth_bit(int x, int k)
 {
 	return (x >> k) & 1;
 }

 int main()
 {
 	int t; cin >> t;
 	while(t--)
 	{
 		unsigned int x; cin >> x;
 		int bit[32];
 		for(int k = 0; k < 32; k++)
 		{
 			bit[k] = (x >> k) & 1;
 		}

 		reverse(bit, bit + 32);
 		unsigned int ans = 0;
 		for(int k = 0; k < 32; k++)
 		{
 			if(bit[k])
 			{
 				ans += 1 << k;
 			}
 		}

 		cout << ans << endl;

 	}

 	return 0;
 }
