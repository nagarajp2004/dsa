#include<stdio.h>
int n,m,p[10],w[10];

void greedy(){
    float max,profit=0;
    int k,i,j;
    for(int i=0;i<n;i++){
        max=0;
    printf("hte items added are\n");
        for(int j=0;j<n;j++){
            if(max< ((float)p[j])/w[j]){
                max=(float)p[j]/w[j];
                k=j;
            }
        }

        if(w[k]<=m){
            printf("%d",k);
            profit+=p[k];
            m=m-w[k];
            p[k]=0;
        }else{
            break;
        }

    }
 printf("the discreate profit is %f",profit);
 printf("the continues item added is %d with proportion %f",k,(float)m/w[k]);
 profit+=((float)m/w[k])*p[k];
 printf("%f",profit);

}
int main()
{
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
 greedy();
}