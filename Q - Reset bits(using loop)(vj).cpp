 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
 	int x, k; cin >> x >> k;
 	int ans = 0;
 	for( ; k <= 30; k++)
 	{
 		if((x >> k) & 1)
 		{
 			ans += (1 << k);
 		}
 	}
 	cout << ans << endl;

 	return 0;
 }
