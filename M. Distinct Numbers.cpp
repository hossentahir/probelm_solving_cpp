#include<bits/stdc++.h>
#define MaxNumber 2000
using namespace std;



int main()
{
    int arraySize;cin>>arraySize;

    int arr[arraySize];
    for(int i=0;i<arraySize;i++) cin>>arr[i];
    int visited[MaxNumber]={0};


    for(int i=0;i<arraySize;i++)
    {
        int x;
        x=arr[i]+1000;
        visited[x]=1;
    }
    int c=0;
    for(int i=0;i<=MaxNumber;i++)
    {
        if(visited[i]==1) c++;
    }
    cout<<c;
    return 0;
}
