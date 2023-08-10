#include <iostream>
#include <queue>
using namespace std;

#define MAX_VERTICES 100

// Graph represented by adjacency matrix
int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
int numVertices;

// Function to add an edge to the graph
void addEdge(int src, int dest) {
    adjacencyMatrix[src][dest] = 1;
    adjacencyMatrix[dest][src] = 1;
}

// Function to perform BFS traversal
void bfs(int startVertex) {
    bool visited[MAX_VERTICES] = {false};
    queue<int> q;

    visited[startVertex] = true;
    cout << "BFS traversal starting from vertex " << startVertex << ": ";

    q.push(startVertex);

    while (!q.empty()) {
        int currVertex = q.front();
        q.pop();
        cout << currVertex << " ";

        for (int i = 0; i < numVertices; i++) {
            if (adjacencyMatrix[currVertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }

    cout << endl;
}

int main() {
    // Initialize the graph with 6 vertices
    numVertices = 6;

    // Initialize adjacency matrix with zeros
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }

    // Add edges to the graph
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 4);
    addEdge(3, 4);
    addEdge(3, 5);

    // Perform BFS traversal starting from vertex 0
    bfs(0);

    return 0;
}
