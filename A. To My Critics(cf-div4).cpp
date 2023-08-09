 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
 	int t; cin >> t;
 	while(t--)
 	{
 		int a, b, c; cin >> a >> b >> c;
 		if(a + b >= 10 or b + c >= 10 or a + c >= 10)
 		{
 			cout <<"Yes\n";
 		}
 		else
 		{
 			cout <<"No\n";
 		}
 	}
 	return 0;
 }
