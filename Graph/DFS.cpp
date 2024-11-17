#include <iostream>
#include <stack>
using namespace std;

#define MAX 100  // Maximum number of vertices in the graph

class Graph {
public:
    int adj[MAX][MAX];  // Adjacency matrix
    int V;  // Number of vertices

    Graph(int V) {
        this->V = V;
        // Initialize adjacency matrix with 0 (no edges)
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                adj[i][j] = 0;
            }
        }
    }

    // Add an edge between vertices u and v
    void addEdge(int u, int v) {
        adj[u][v] = 1;
        adj[v][u] = 1;  // Undirected graph
    }

    // DFS function
    void DFS(int start) {
        bool visited[MAX] = {false};  // Array to track visited nodes
        stack<int> s;  // Stack for DFS

        s.push(start);  // Push the start node onto the stack
        visited[start] = true;  // Mark the start node as visited

        while (!s.empty()) {
            int node = s.top();  // Get the top element of the stack
            s.pop();  // Pop the top element from the stack
            cout << node << " ";  // Process the current node

            // Visit all the neighbors of the current node
            for (int i = 0; i < V; i++) {
                if (adj[node][i] == 1 && !visited[i]) {
                    visited[i] = true;  // Mark as visited
                    s.push(i);  // Push the adjacent node onto the stack
                }
            }
        }
        cout << endl;  // Print a newline after DFS
    }
};

int main() {
    int V = 6;  // Number of vertices in the graph
    Graph g(V);

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    cout << "Depth-First Search starting from vertex 0:" << endl;
    g.DFS(0);  // Perform DFS starting from vertex 0

    return 0;
}
