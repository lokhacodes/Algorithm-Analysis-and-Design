#include <stdio.h>

int n, i, j, visited[10], queue[10], front = -1, rear = -1, dist[10]; 
int adj[10][10];

void bfs(int v)
{
    visited[v] = 1; 
    dist[v] = 0;   
    queue[++rear] = v; 

    while (front < rear) 
    {
        int u = queue[++front]; 
     for (i = 1; i <= n; i++)
        {
            if (adj[u][i] && !visited[i])
            {
                queue[++rear] = i; 
                visited[i] = 1; 
                dist[i] = dist[u] + 1; 
            }
        }
    }
}

int main()
{
    int v, e, m, c;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the number of edges: "); 
    scanf("%d", &e);

    for (i = 1; i <= n; i++)
    {
        queue[i] = 0;
        visited[i] = 0;
        dist[i] = 999999; 
    }

    for (i = 1; i <= e; i++)
    {
        printf("Enter the edges: ");
        scanf("%d%d", &m, &c);
        adj[m][c] = 1;
        adj[c][m] = 1;
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &v);
    bfs(v);

    printf("The nodes that are reachable are:\n");
    for (i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            printf("%d\t", i);
            printf("dist[%d] = %d\n", i, dist[i]);
        }
        else
        {
            printf("%d is not reachable from the starting vertex\n", i);
        }
    }

    return 0;
}
