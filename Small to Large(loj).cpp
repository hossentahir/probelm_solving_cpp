#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        static int j=1;
        int arr[3];
        for(int i = 0;i<3;i++) cin>>arr[i];
            int i=0;
            if(arr[i]<arr[i+1] and arr[i]<arr[i+2])
            {
                cout<<"Case "<<j<<": "<<arr[i]<<" ";
                if(arr[i+1]<arr[i+2]) cout <<arr[i+1]<<" "<<arr[i+2]<<endl;
                else cout<<arr[i+2]<<" "<<arr[i+1]<<endl;
            }
            else if ( arr[i+1]< arr[i] and arr[i+1]<arr[i+2])
            {
                cout<<"Case "<<j<<": "<<arr[i+1]<<" ";
                if(arr[i]<arr[i+2]) cout<<arr[i]<<" "<<arr[i+2]<<endl;
                else cout<<arr[i+2]<<" "<<arr[i]<<endl;
            }
            else
            {
                cout<<"Case "<<j<<": "<<arr[i+2]<<" ";
                if(arr[i+1]<arr[i]) cout<<arr[i+1]<<" "<<arr[i]<<endl;
                else cout<<arr[i]<<" "<<arr[i+1]<<endl;
            }
            j++;


    }
    return 0;
}
