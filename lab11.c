#include<stdio.h>
#include<stdlib.h>
# define size 20
int a[10][10];
void bfs(int n){
   int q[100],front=0,rear=-1,f[n];
   for(int source=0;source<n;source++){
      for(int i=0;i<n;i++)
        f[i]=0;
        f[source]=1;
        q[++rear]=source;
        printf("the nodes reachable from the %d:%d\t",source,source);
        while(front<=rear){
            
           for(int j=0;j<n;j++){
            if(a[front][j]==1 && f[j]==0){
            printf("%d\t",j);
             q[++rear]=j;
             f[j]=1;
            }
               
        }
        front++;
        }
   }
}
void read_adj(int n){
    printf("enter the adjacency matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

int main(){
  int n;
  printf("enter the number of ele in the graph\n");
  scanf("%d",&n);
  read_adj(n);
  bfs(n);
}