#include <stdio.h>

#define MAX 10

int adj[MAX][MAX], visited[MAX];
int n;

/* DFS function */
void dfs(int v) {
    int i;
    visited[v] = 1;
    printf("%d ", v);

    for (i = 0; i < n; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    for (i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS traversal: ");
    dfs(start);

    return 0;
}
