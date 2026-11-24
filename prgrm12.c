#include <stdio.h>
#define INF 999

int parent[10];

int find(int i) {
    while (parent[i]) i = parent[i];
    return i;
}

int uni(int i, int j) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

int main() {
    int n = 4, ne = 1, min, mincost = 0, a, b, u, v;
    int cost[4][4] = {
        {INF, 10, 6, 5},
        {10, INF, INF, 15},
        {6, INF, INF, 4},
        {5, 15, 4, INF}
    };

    printf("Edges of Minimum Spanning Tree:\n");
    while (ne < n) {
        min = INF;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        u = find(u);
        v = find(v);
        if (uni(u, v)) {
            printf("Edge %d: (%d, %d) cost = %d\n", ne++, a, b, min);
            mincost += min;
        }
        cost[a][b] = cost[b][a] = INF;
    }
    printf("Minimum cost = %d\n", mincost);
    return 0;
}

