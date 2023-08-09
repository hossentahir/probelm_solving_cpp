#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;cin>>n;
    char charDigit;

    for(int i=0;i<n;i++)
    {
        cin>>charDigit;
        sum+=charDigit-'0';

    }
    cout<<sum<<endl;
    return 0;
}
