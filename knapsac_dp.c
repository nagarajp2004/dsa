#include<stdio.h>
int w[10],n,m,p[10];

int maxi(int x,int y){
  if(x>y){
    return x;
  }
  return y;
}

void knap_dp(){
    int v[10][10];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                v[i][j]=0;
            }
            else if(j<w[i]){
                v[i][j]=v[i-1][j];
            }
            else{
                v[i][j]=maxi(v[i-1][j],p[i]+v[i-1][j-w[i]]);
            }
        }
    }
 printf("the matrix is");
 for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        printf("%d\t",v[i][j]);
    }
    printf("\n");
 }

 while(n){
    if(v[n][m]!=v[n-1][m]){
        printf("%d",n);
        m=m-w[n];
    }
 n--;
 }
 
}

int main(){
    printf("enter the number of item\n");
    scanf("%d",&n);
    int i;
    printf("Enter the weights of n items: ");
 for(i=1;i<=n;i++)
 scanf("%d",&w[i]);
 printf("Enter the prices of n items: ");
 for(i=1;i<=n;i++)
scanf("%d",&p[i]);
 printf("Enter the capacity of Knapsack: ");
 scanf("%d",&m);
 knap_dp();

}