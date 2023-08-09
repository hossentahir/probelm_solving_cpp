#include<bits/stdc++.h>
using namespace std;
long long lcm(int a,int b)
{
        int mx = max(a,b);//2
        long long sum=1;
        for(int i=2;i<=mx;i++)//2
        {
            if(a%i==0 or b%i==0)//1%2 2%2
            {
                if(a%i==0) a/=i;//1
                if(b%i==0) b/=i;//1
                sum*=(long long)i;//2
                i=1;
                if(a==1 and b==1) break;
            }
        }
        return sum;
}
void solve()
{
        int a, b;cin>>a>>b ;
        cout<<"LCM = "<<lcm(a,b)<<endl;
}

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        solve();

    }
    return 0;
}
// Alhamdulillah hoiese onek chestar pore!
//i did it my own.
