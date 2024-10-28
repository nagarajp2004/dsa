#include<stdio.h>
int n,m,p[10],w[10];

void gk(){
    float max,profit=0;
    int k=0,i,j;
for(int i=0;i<n;i++){
    max=0;
     for(int j=0;j<n;j++){
         if(p[j]!=0 && max< ((float)p[j])/w[j]){
            k=j;
            max=((float)p[j])/w[j];
         }
     }

     if(w[k]<=m){
       printf("%d",k);
       m=m-w[k];
       profit+=p[k];
       p[k]=0;
     }
     else{
        break;
     }
}
printf("the diascreat profit is %f",profit);

if(m>0 && max>0){
    profit+=(((float)m)/w[k])*(p[k]);
}
printf("the continuos profit is %f",profit);


}
int main(){
    int i;
 printf("Enter the no. of items: ");
 scanf("%d",&n);
 printf("Enter the weights of n items: ");
 for(i=0;i<n;i++)
 scanf("%d",&w[i]);
 printf("Enter the prices of n items: ");
 for(i=0;i<n;i++)
 scanf("%d",&p[i]);
 printf("Enter the capacity of Knapsack: ");

 scanf("%d",&m);
 gk(); 
}

