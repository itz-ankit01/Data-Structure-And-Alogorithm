// Print all the nodes reachable from a given starting node in a digraph using BFS method.

#include <stdio.h>
#include <conio.h>
int a[20][20], q[20], visited[20], n, i, j, f = -1, r = -1;
void bfs(int v)
{
    q[++r] = v;
    visited[v] = 1;
    while (f <= r)
    {
        v = q[f++];
        for (i = 1; i <= n; i++)
        {
            if (a[v][i] && !visited[i])
            {
                visited[i] = 1;
                q[++r] = i;
            }
        }
    }
}
int main()
{
    int v;
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        q[i] = 0;
        visited[i] = 0;
    }
    printf("\nEnter graph data in matrix form:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the starting vertex: ");
    scanf("%d", &v);
    bfs(v);
    printf("\nThe nodes which are reachable are:\n");
    for (i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}