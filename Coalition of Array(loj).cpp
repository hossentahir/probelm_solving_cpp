#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        int n;cin>>n;
        int arr1[n];
        for(int i=0;i<n;i++) cin>>arr1[i];
        cout<<arr1<<endl;
        int m;cin>>m;
        int arr2[m];
        for(int i=0;i<m;i++) cin>>arr2[i];
        int arr[m+n];
        int k=0;
        int i=0,j=0;
        for(;i<n and i<m;)
        {
            if(arr1[i]>arr2[j])
            {
                arr[k++]=arr2[j++];
            }
            else
            {
                arr[k++]=arr1[i++];
            }
        }
        for(;i<n;)
        {
            arr[k++]=arr1[i++];
        }
        for(;j<m;)
        {
            arr[k++]=arr2[j++];
        }
        cout<<arr[0]<<endl;
        for(int i=0;i<m+n;i++) cout<<arr[i]<<" ";
            cout<<endl;
    }
    return 0;
}
