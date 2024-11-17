#include <iostream>
#include <queue>
using namespace std;
#define MAX 100

class Graph {
    public:
        int v;
        int adj[MAX][MAX];

    Graph(int v){
        this->v = v;
        for(int i = 0; i < v; i++){
            for(int j = 0; j < v; j++){
                adj[i][j] = 0;
            }
        }

    }

    void addEdge(int u, int v){
        adj[u][v] = 1; //directed
        adj[v][u] = 1; //un-directed
        
    }

    //BFS function
    void BFS(int start){
        bool visited[start] = {false};
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while(!q.empty()){
            int node = q.front();
            q.pop();
            cout << node << " ";


            //adjecent element
            for(int i = 0; i < v; i++){
                if(adj[node][i] = 1 && !visited[i]){
                    visited[i] = true;
                    q.push(i);
                }
            }
        }

    }


};


int main(){

    int v = 6;
    Graph g(6);
    
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    cout << "Breadth-First Search starting from vertex 0:" << endl;
    g.BFS(0);  // Perform BFS starting from vertex 0

    return 0;
}