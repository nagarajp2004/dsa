#include<stdio.h>
 int cost[10][10],n,colsum[10];

 void colsuma(){
    for(int i=0;i<n;i++){
        colsum[i]=0;
        for(int j=0;j<n;j++){
            colsum[i]+=cost[j][i];
        }
    }
 }
 void topo(){
    int s[10]={0};
  int i,j ; 
  printf("the topological ordinf is \n");
    for( i=0;i<n;i++){
        colsuma();
    for( j=0;j<n;j++){
        if(s[j]==0 && colsum[j]==0){
            break;
        }
    }
  s[j]=1;
printf("%d",j);
      for(int k=0;k<n;k++){
      cost[j][k]=0;        
      }

    }
 }
 int main(){

    printf("etnr the number of vertices\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    topo();
 }