 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
 	int n; cin >> n;
 	int arr[n];
 	for(int i = 0; i < n; i++)
 	{
 		cin >> arr[i];
 		if(arr[i] % 2 == 0)
 		{
 			cout <<"Good" << endl;
 		}
 		else
 		{
 			cout << "Bad" << endl;
 		}
 	}
 	return 0;
 }
