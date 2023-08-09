 #include<bits/stdc++.h>
 using namespace std;

 bool isLucky(int number)
 {
     while(number>0)
     {
         int lastDigit=number%10;
         if(!(lastDigit==4 || lastDigit==7)) return 0;
         int numberWithoutLastDigit=number/10;
         number=numberWithoutLastDigit;
     }
     return 1;
 }

 void printLucky(int a,int b)
 {
     int flag=0;
      for(a;a<=b;a++)
      {
          if(isLucky(a)){
            cout<<a<<" ";
            flag=1;
          }
      }
      if(!flag) cout<<-1<<endl;
 }

 int main()
 {
      int a,b;cin>>a>>b;
      printLucky(a,b);


     return 0;
 }
