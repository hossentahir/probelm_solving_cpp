 #include<bits/stdc++.h>
 using namespace std;

 bool check_kth_bit(int x, int k)
 {
 	return (x >> k) & 1;
 }

 void print_on_bits(int x)
 {
 	for(int k = 0; k < 32; k++)
 	{
 		if(check_kth_bit(x,k))
 		{
 			cout << k << " ";
 		}
 	}
 	cout << endl;
 }
 void print_off_bits(int x)
 {
 	for(int k = 0; k < 32; k++)
 	{
 		if(!check_kth_bit(x,k))
 		{
 			cout << k << " ";
 		}
 	}
 	cout << endl;
 }
 int count_on_bits(int x)
 {
 	int cnt = 0;
 	for(int k = 0; k < 32; k++)
 	{
 		if(check_kth_bit(x,k))
 		{
 			 cnt++;
 		}
 	}
 	return cnt;
 }
 bool is_even(int x)
 {
 	if(x & 1)
 	{
 		return 0;
 	}
 	else 
 	{
 		return 1;
 	}
 }

 int set_kth_bit(int x,int k)
 {
 	return(x | (1 << k));
 }
 
 int reset_kth_bit(int x,int k)
 {
 	return(x & (~(1 << k)));
 }
 int toggle_bits(int x)
 {
 	return ~x;
 }
 int toggle_kth_bit(int x, int k)
 {
 	return (1 << k) ^ x;
 }
 int multiply_by_2(int x)
 {
 	return x << 1;
 }

 int divide_by_2(int x)
 {
 	return x >> 1;
 }

 bool pow_of_2(int x)
 {
 	if(count_on_bits(x) == 1)
 	{
 		return true;
 	}
 	else
 	{
 		return false;
 	}
 }
 int main()
 {
 	cout << check_kth_bit(11,2) << endl;
 	print_on_bits(11);
 	print_off_bits(11);
 	cout << count_on_bits(11) << endl;
 	cout << is_even(13) << endl;
 	cout << set_kth_bit(11,0) << endl;
 	cout << set_kth_bit(11,1) << endl;
 	cout << set_kth_bit(11,2) << endl;
 	cout << set_kth_bit(11,3) << endl;
 	cout << reset_kth_bit(11,3) << endl;
 	cout << toggle_bits(-11) << endl;
 	cout << toggle_kth_bit(11,0) << endl;
 	cout << multiply_by_2(10) << endl;
 	cout << divide_by_2(10) << endl;
 	cout << pow_of_2(16) << endl;
 	return 0;
 }
