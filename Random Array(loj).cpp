#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        int n; cin>>n;// 3 1 2 3
        int arr[n];
        int ass=0;
        int des=0;
        //bool flag=0;
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0; i<n-1; i++)
        {
            if((arr[i]<=arr[i+1]))
            {
                ass++;
            }
            else break;
        }
        if(ass==(n-1))
        {
            cout<<"Yes"<<endl;
            continue;
        }
        //else flag=1;

           for(int i=0; i<n-1; i++)
           {
                if((arr[i]>=arr[i+1]))
                {
                    des++;
                }
                else break;
           }
           if(des==(n-1)){
                cout<<"Yes"<<endl;
                continue;
           }
           else
           cout << "No" << endl;

        //if(ass or des) cout<<"NO\n";
        //else cout<<"YES\n";
    }
    return 0;
}
