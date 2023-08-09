#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,sum=0;cin>>n;
        int previousNumber=n;
        while(n>0)
        {
            int lastDigit = n%10;
            sum+=pow((double)lastDigit,3);
            n/=10;
        }
        if(sum==previousNumber) cout<<previousNumber<<" is an armstrong number!"<<endl;
        else cout<<previousNumber<<"  is not an armstrong number!"<<endl;
    }
    return 0;
}
