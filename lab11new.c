#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
void bfs(int n, int source, int amat[][SIZE], int visited[]) 
{
    int q[SIZE], r=-1, f=0, u, v;
    visited[source]=1; q[++r]=source;
    while(f<=r)
    {
        u= q[f++];
        for(v=0;v<n;v++)
        {
            if((amat[u][v]==1)&(visited[v]==0))
            {
                q[++r]=v;
                visited[v]=1;
            }
        }
    }
}
int main() 
{
    int n, amat[SIZE][SIZE], source, visited[SIZE], i, j;
    printf("Enter number of vertices:\n"); 
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &amat[i][j]);
    printf("The adjacency matrix is:\n");
    for(i=0; i<n; i++) 
    {
        for(j=0; j<n; j++)
            printf("%d\t", amat[i][j]);
        printf("\n");
    }
    for(source=0;source<n;source++)
    {
        printf("from %d it is reachable to\n",source);
        for(i=0; i<n; i++) 
            visited[i]=0;
        bfs(n, source, amat, visited);
        for(i=0;i<n;i++)
        {
            if(visited[i]==0)
                printf("%d is not reachable\n", i);
            else
                printf("%d isreachable\n",i);
        }
    }
    return 0;
}