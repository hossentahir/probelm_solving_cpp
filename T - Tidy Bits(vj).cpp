 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
 	int x; cin >> x;
 	int cnt = 0;
 	for(int k = 0; k < 21; k++)
 	{
 		if((x >> k) & 1)
 		{
 			cnt++;
 		}
 	}
 	cout << ((1 << cnt) - 1) << endl;
 	return 0;
 }
