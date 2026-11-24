#include <stdio.h>
#define INF 999
#define V 4

int main() {
    int visited[V] = {0}, ne = 1, min, mincost = 0, a, b;
    int cost[V][V] = {
        {INF, 10, 6, 5},
        {10, INF, INF, 15},
        {6, INF, INF, 4},
        {5, 15, 4, INF}
    };

    visited[0] = 1; // Start from vertex 0

    printf("Edges of Minimum Spanning Tree:\n");
    while (ne < V) {
        min = INF;
        for (int i = 0; i < V; i++) {
            if (visited[i]) {
                for (int j = 0; j < V; j++) {
                    if (!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        printf("Edge %d: (%d, %d) cost = %d\n", ne++, a, b, min);
        mincost += min;
        visited[b] = 1;
    }

    printf("Minimum cost = %d\n", mincost);
    return 0;
}

