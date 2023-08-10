  #include<bits/stdc++.h>
 using namespace std;

 bool is_power_of_2(int n)
 {
 	while(n > 1 and n % 2 == 0)
 	{
 		n /= 2;
 		if(n == 1)
 		{
 			return true;
 		}
 	}
 	if(n == 1 ) return true;
 	return false;
 }

 int main()
 {
 	int t; cin >> t;
 	while(t--)
 	{
 		int n; cin >> n;
 		long long sum = 0;
 		for(int i = 1; i <= n; i++)
 		{
 			if(is_power_of_2(i))
 			{
 				sum += -1*i;
 			}
 			else
 			{
 				sum += i;
 			}
 		}
 		cout << sum << endl;
 	}

 	return 0;
 }
