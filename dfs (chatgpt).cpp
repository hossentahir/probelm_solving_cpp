#include <iostream>
using namespace std;

#define MAX_VERTICES 100

// Graph represented by adjacency matrix
int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];

// Function to add an edge to the graph
void addEdge(int src, int dest) {
    adjacencyMatrix[src][dest] = 1;
    adjacencyMatrix[dest][src] = 1;
}

// Function for DFS traversal
void dfs(int vertex) {
    visited[vertex] = true;
    cout << vertex << " ";

    for (int i = 0; i < MAX_VERTICES; i++) {
        if (adjacencyMatrix[vertex][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    // Initialize the graph with 6 vertices
    int numVertices = 6;

    // Initialize adjacency matrix with zeros
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }

    // Initialize visited array with false
    for (int i = 0; i < numVertices; i++) {
        visited[i] = false;
    }

    // Add edges to the graph
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 4);
    addEdge(3, 4);
    addEdge(3, 5);

    // Perform DFS traversal starting from vertex 0
    cout << "DFS traversal starting from vertex 0: ";
    dfs(0);
    cout << endl;

    return 0;
}
