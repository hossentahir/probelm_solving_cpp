 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 	int t; cin >> t;
 	while(t--)
 	{
 		int n, m, k, h;
 		cin >> n >> m >> k >> h;
 		int arr[n];
 		for(int i = 0; i < n; i++) cin >> arr[i];

 		int cnt = 0;
 		for(int i = 0; i < n; i++)
 		{
 			int diff = arr[i] - h;
 			if(diff < 0)
 			{
 				diff *= (-1);
 			}
 			for(int j = 0; j < m; j++) 
 			{
 				if(j * k == diff)
 				{
 					cnt++;
 					break;
 				}
 			}
 		}
 		cout << cnt << endl;
 	}
 	return 0;
 }