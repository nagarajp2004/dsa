#include<stdio.h>


int cost[10][10],n;


void krushkal()
{   
    int par[10];
    int i,j;
    int a=0,b=0,u=0,v=0,min,ne=0,mincost=0;
    for(i=0;i<n;i++)
    par[i]=-1;
    printf("the manimum spanning tree");
    while(ne<n-1)
    {
       
         min=999;
         for(i=0;i<n;i++){
             for(j=0;j<n;j++)
             { if (cost[i][j]<min)
                  {min=cost[i][j];
                  a=u=i;
                  b=v=j;}
            }
         }

         while(par[u]!=-1)
         u=par[u];
         while(par[v]!=-1)
         v=par[v];
         if(u!=v)
         {printf("vertex %d to %d and cost is %d",a,b,min);
          mincost+=min;
          par[v]=u;
          ne++;
         }
         cost[a][b]=cost[b][a]=999;
    }
    printf("cost %d",mincost);
}

void main()
{ 
    int i,j;
    printf("enter the number of vertices");
    scanf("%d",&n);
    printf("enter the cost matrix");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
     scanf("%d",&cost[i][j]);
     krushkal();
}