#include <iostream>
#include <climits>
using namespace std;
# define INF INT_MAX // INF set to infinity
# define MAX 100

void floydWarshall(int graph[MAX][MAX], int n){
    // creating a matrix to store D0-D4 values
    int arr[MAX][MAX];

    //copying elements to new array.
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = graph[i][j];
        }
    }
    //floyd-warshall algorithm
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(arr[i][j] > (arr[i][k] + arr[k][j]) && (arr[i][k] != INF && arr[k][j] != INF)){
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
                
            }
        }
    }

}


int main(){

    int n;
    cin >> n;

    int graph[MAX][MAX];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> graph[i][j];
        }
    }

    return 0;
}
