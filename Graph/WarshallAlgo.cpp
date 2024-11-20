#include <iostream>
using namespace std;

void warshall(int adj[10][10], int n){
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]);
            }
        }
    }
}

bool isCyclic(int adj[10][10], int n){
    for(int i = 0; i < n; i++){
        if(adj[i][i] == 1){
            return true;
        }
    }
    return false;
}

int main(){
    
    int n;
    cin >> n;
    
    int adj[10][10] = {0};
    
    int u, v;
    while(cin >> u >> v){
        
        adj[u][v] = 1;
    }
    warshall(adj, n);
    
    if(!isCyclic(adj, n)){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
