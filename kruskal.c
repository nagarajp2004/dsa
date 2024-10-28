#include<stdio.h>
int cost[10][10],n;

void k(){
    int par[10];
    int a,b,u,v,min,mincost=0,ne=0;

    for(int i=0;i<n;i++){
        par[i]=-1;
    }
    printf("the min span edges are\n");
    while(ne<n-1){
        min=999;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(cost[i][j]<min){
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
      while(par[v]!=-1){
        v=par[v];
      }
      while(par[u]!=-1){
        u=par[u];
      }
      if(u!=v){
            mincost+=min;
            printf("%d",min);
            par[v]=u;
            ne++;
      }
    
     cost[a][b]=cost[b][a]=999;
    }
       printf("Cost of MST = %d\n", mincost);

}

int main() {
    // Read the number of vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    
    // Read the cost adjacency matrix
    printf("Enter the cost matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }
    
    // Call the function to compute MST using Kruskal's algorithm
    k();
    
}