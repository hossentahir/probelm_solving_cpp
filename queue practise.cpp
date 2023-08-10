#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    queue<int> queue;
    queue.push(1);
    queue.push(2);
    cout<<queue.front()<<" "<<queue.front();
    int po;
    po=queue.back();
    queue.push(3);
    cout<<queue.front()<<" "<<queue.front();

    while(!queue.empty())
    {
        cout<<endl<<queue.front()<<endl;
        cout<<po;
        queue.pop();
    }

    return 0;
}
