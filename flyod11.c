#include<stdio.h>
int min(int x,int y ){
    if(x>y){
        return y;
    }
    return x;

}


void floyd(int cost[][10],int n){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cost[i][j]=cost[i][j]||(cost[i][k] && cost[k][j]);
            }
        }
    }

}
int main(){
    int n,cost[10][10];
    printf("entr the  number fof vercies");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
floyd(cost,n);
for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d\t",cost[i][j]);
        }
        printf("\n");
    }

}