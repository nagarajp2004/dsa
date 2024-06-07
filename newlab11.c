#include<stdio.h>
#include<stdlib.h>
#define size 20
void bfs(int n,int source,int amatrix[][size],int visted[n]){
    visted[source]=1;
    int f=0,r=-1,q[size],u;
    q[++r]=source;
    while(f<=r){
      u=q[f++];
      for(int i=0;i<n;i++){
        if(amatrix[u][i]==1 && visted[i]==0){
              q[++r]=i;
              visted[i]=1;
        }
      }
    }

}
int main(){
    int n,amat[size][size],source,visted[size],i,j;
    printf("etnter the number of vertices \n");
    scanf("%d",&n);
    printf("etnr he adjacency mattix\n");
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&amat[i][j]);
        }
    }
    printf("the adaJACENCY MATRIX IS \n");
     for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",amat[i][j]);
        }
        printf("\n");
    }
    for(source=0;source<n;source++){
        for(int i=0;i<n;i++){
            visted[i]=0;
        }
        printf("the vertices that can be visted from  %d",source);
        bfs(n,source,amat,visted);
        for(int i=0;i<n;i++){
            if(visted[i]==1){
                printf("%d is reachable\n",i);
            }
            else{
                printf("%d is not reachable ",i);
            }
        }
    }
}

