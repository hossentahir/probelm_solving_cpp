 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
 	int year; cin >> year;
 	for(int i = year+1; i <= 9000; i++ )
 	{
 		int temp = i;
 		int arr[4], arr2[10];
 		for(int i = 0; i < 10; i++)
 		{
 			arr2[i] = 0;
 		}
 		int j = 0;
 		while(temp > 0)
 		{
 			int last_digit = temp % 10;
 			arr[j] = last_digit;
 			j++;
 			temp /= 10;

 		}
 		for(int i = 0; i < 4; i++)
 		{
 			arr2[arr[i]]++;
 		}

 		bool flag = 0;
 		for(int i = 0; i < 10; i++)
 		{
 			if(arr2[i] >= 2)
 			{
 				flag = 1;
 				break;
 			}
 		}
 		if(!flag)
 		{
 			cout << i << endl;
 			break;
 		}
 	}
 	return 0;
 }
