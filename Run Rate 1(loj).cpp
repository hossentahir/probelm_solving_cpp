#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        double opponentRun,currentRun,remainingBall;
        cin>>opponentRun>>currentRun>>remainingBall;
        double cuttentRate=(double)currentRun/((300-remainingBall)/6);
        double needRate= (max(0.0,(opponentRun-currentRun+1)))/(double)( remainingBall/6);
        cout<<fixed<<setprecision(2)<<cuttentRate<<" "<<needRate<<endl;


    }
    return 0;
}
