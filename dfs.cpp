#include<bits/stdc++.h>
using namespace std;

void DFS(int vex, int a[][8], int n)
{
    stack<int>st;
    int visited[n] = {0};
    st.push(vex);
    cout<<vex<<" ";
    visited[vex] = 1;
    int u = vex;

    while(!st.empty())
    {
        for(int v = 1;v<n;v++)
        {
            if(a[u][v]==1 && visited[v]==0)
            {
                cout<<v<<" ";
                st.push(v);
                u=v;
                visited[v]=1;
            }
        }
        st.pop();
        u=st.top();

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

                     cout<<"Vertex 1: ";
                     DFS(6,a,8);
                     DFS(7,a,8);



    return 0;
}
