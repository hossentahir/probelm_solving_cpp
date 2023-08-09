#include<bits/stdc++.h>
using namespace std;

void DFS(int start, int a[][8], int n)
{
    static int visited[8] = {0};
    if(visited[start] == 0)
    {
        cout<<start<<" ";
        visited[start]=1;

        for(int v=1;v<n;v++)
        {
            if(a[start][v]==1 && visited[v]==0)
            {
                DFS(v,a,n);
            }
        }
    }
}
int main()
{

    int a[8][8] = { {0,0,0,0,0,0,0,0},
                     {0,0,1,1,1,0,0,0},
                     {0,1,0,1,0,0,0,0},
                     {0,1,1,0,1,1,0,0},
                     {0,1,0,1,0,1,0,0},
                     {0,0,0,1,1,0,1,1},
                     {0,0,0,0,0,1,0,0},
                     {0,0,0,0,0,1,0,0} };

                     cout<<"Vertex 6: ";
                     DFS(1,a,8);
                     DFS(5,a,8);

    return 0;
}
//eita ami kori nai. Abdul bari er course deikha deikha bosai disi sudhu output er jonno!! so disappointing.
