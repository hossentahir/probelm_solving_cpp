#include<bits/stdc++.h>
using namespace std;

void BFS(int vtx, int a[][8], int n)
{
    queue<int>q;
    int visited[n] = {0};
    q.push(vtx);
    cout<<vtx<<" ";
    visited[vtx] = 1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v=1;v<n;v++)
        {
            if(a[u][v] == 1 && visited[v]==0)
            {
                q.push(v);
                cout<<v<<" ";
                visited[v] = 1;
            }
        }
    }
    cout<<endl;

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

                     cout<<"Vertex 1: ";
                     BFS(1,a,8);
                     cout<<"Vertex 2: ";
                     BFS(2,a,8);
                     cout<<"Vertex 3: ";
                     BFS(3,a,8);
                     cout<<"Vertex 4: ";
                     BFS(4,a,8);
                     cout<<"Vertex 5: ";
                     BFS(5,a,8);
                     cout<<"Vertex 6: ";
                     BFS(6,a,8);
                     cout<<"Vertex 7: ";
                     BFS(7,a,8);





    return 0;
}
