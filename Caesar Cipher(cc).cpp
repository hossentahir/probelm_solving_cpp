 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int t;cin>>t;
     cin.ignore();
     while(t--)
     {
         //taking input the length of the string and three string.
         int slength;cin>>slength ;
         string s;cin>>s;//s
         string q;cin>>q;//l
         string u;cin>>u;//z

         //Finding the magnitude of k.
         int k;
         if(s[0]<=q[0])
         {
            k=q[0]-s[0];
         }
         else
         {
             k= 'z'-s[0]+q[0]-'a'+1;
             //cout<<'z'-s[0]<<endl<<q[0]-'a';
         }
         //cout<<k<<endl;

         //printing the ROT-k of u.
         for(int i=0;i<slength;i++)
         {
            if(u[i]+k>122)
            {
                cout<<(char)(u[i]+k-122+'a'-1);
            }
            else cout<<(char)(u[i]+k);
         }
         cout<<endl;
     }

     return 0;
 }
