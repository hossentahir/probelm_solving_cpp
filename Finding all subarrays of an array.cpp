 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
 	int n; cin >> n;
 	int arr[n];
 	for(int i = 0; i < n; i++)
 	{
 		cin >> arr[i];
 	}
    int mx = -2147483648;
    int sum;
 	for(int k = 0; k < n; k++)
 	{

 		for(int i = 0; i < n; i++)
 		{
 			bool flag = 0;
 			if(k <= i)
 			sum = 0;

 			for(int j = k; j <= i; j++)
 			{
 				cout << arr[j] <<" ";
 				flag = 1;
 				sum += arr[j];
 			}
 			mx = max(mx,sum);
 			cout << mx << " ";

 			if(flag)
 			cout << sum << endl;
 		}
 	}
 	cout <<"Max = "<< mx;
 	return 0;
 }
