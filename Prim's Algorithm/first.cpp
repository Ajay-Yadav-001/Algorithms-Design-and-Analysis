#include <iostream>
using namespace std;

int main(){
    cout << "Enter number of vertices: ";
    cin >> n;

int graph[10][10];

cout << "Enter the adjacency matrix:\n";
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> graph[i][j];

        if (graph[i][j] == 0)
            graph[i][j] = INF;
    }
}

bool visited[10] = {false};
int totalCost = 0;

// Start from vertex 0
visited[0] = true;

cout << "\nEdges in Minimum Spanning Tree:\n";

for (int edge = 0; edge < n - 1; edge++) {

    int minWeight = INF;
    int u = -1, v = -1;

    // Find minimum edge
    for (int i = 0; i < n; i++) {
        if (visited[i]) {
            for (int j = 0; j < n; j++) {
                if (!visited[j] && graph[i][j] < minWeight) {
                    minWeight = graph[i][j];
                    u = i;
                    v = j;
                }
            }
        }
    }

    // Add selected edge
    visited[v] = true;
    totalCost += minWeight;

    cout << u << " -- " << v
         << "  Weight = " << minWeight << endl;
}

cout << "\nMinimum Cost = " << totalCost << endl;

return 0;

}