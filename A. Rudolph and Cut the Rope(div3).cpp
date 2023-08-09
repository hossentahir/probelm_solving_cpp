 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int t;cin>>t;//4
     cin.ignore();
     while(t--)
     {
         int n;cin>>n;//3
         int cnt=0;
         cin.ignore();
         while(n--)//3
         {
             int ai,bi;cin>>ai>>bi;//4 3
             if(ai>bi) cnt++;//1
         }
         cout<<cnt<<endl;
     }
     return 0;
 }
