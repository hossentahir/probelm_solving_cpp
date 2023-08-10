#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int lastIndex=size-1;;
    for(int i=0;i<size/2;i++)
    {


        swap(arr[i],arr[lastIndex]);
        lastIndex--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
