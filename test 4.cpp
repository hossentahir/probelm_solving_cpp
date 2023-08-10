 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int t; cin >> t;
     while(t--)
     {
         int x; cin >> x;
         int ans = 0;
         for(int k = 0; k < 32; k += 2)
         {
             int a, b;
             a = (x >> k) & 1;
             b = (x >> (k + 1)) & 1;
             swap(a, b);
             if(a)
             {
                 ans += (1 << k);
             }
             if(b)
             {
                 ans += (1 << (k + 1));
             }

         }
         cout << ans << endl;
     }
     return 0;
 }
