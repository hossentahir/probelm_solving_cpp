#include<bits/stdc++.h>
using namespace std;
#define pi 3.1416

int main()
{
    int t;cin>>t;
    while(t--)
    {
        double a;cin>>a;
        double area_of_circle,area_of_square,radious;
        radious = (sqrt(2)*a)/2;
        area_of_circle = pi*pow(radious,2);
        area_of_square = a*a;



        cout<<fixed<<setprecision(4)<<area_of_circle-area_of_square<<endl;

    }
    return 0;
}
