#include<stdio.h>
 int cost[10][10],n,dist[10];
 int mina(int x,int y){
    if(x<y){
        return x;
    }
    else{
        return y;
    }
 }
 

 void dis(int src)
 {
  int ne=0,w,min;
    int s[10]={0};
    for(int i=0;i<n;i++)
{
    dist[i]=cost[src][i];
}
 dist[src]=0;
 s[src]=1;
while(ne<n-1){
     min=999;
     for(int j=0;j<n;j++){
        if(s[j]==0 && min>dist[j]){
            min=dist[j];
            w=j;
        }
     }
     s[w]=1;
     for(int v=0;v<n;v++){
        if(s[v]==0 && cost[w][v]!=999){
           dist[v]=mina(dist[v],dist[w]+cost[w][v]);
        }
     }
     ne++;

}
 }
 int main(){
 
    printf("entr hte no of vertices");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    dis(0);
    for(int k=0;k<n;k++){
        printf("%d\n",dist[k]);
    }
 }