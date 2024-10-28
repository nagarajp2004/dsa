#include<stdio.h>
 int cost[10][10],n;
 void primes(){
    int var[10]={0};
    int a,b,min,mincost=0,ne=0;
    var[0]=1;
    while(ne<n-1){
        min=999;
        for(int i=0;i<n;i++){
            if(var[i]==1)
            {
            for(int j=0;j<n;j++)
            {
                if(cost[i][j]<min && var[j]==0)
                {
                 min=cost[i][j];
                 a=i;
                 b=j;
                }

            }
            }
        }
        printf("the edge is ");
        mincost+=min;
        var[b]=1;
        cost[a][b]=cost[b][a]=999;
        ne++;
    }
    printf("the mincost is %d",mincost);

 }
 int main(){
      printf("Enter the no. of vertices: ");
scanf("%d",&n);
printf("Enter the cost matrix\n");
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
 scanf("%d",&cost[i][j]);
 primes();
 }