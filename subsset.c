#include<stdio.h>

#define max_size 100

void ans(int set[],int subset[],int n,int subsize,int total,int nodecount,int sum){
    if(total==sum){
       printf("the subset are:");
       for(int i=0;i<subsize;i++){
        printf("%d\t",subset[i]);
       }
       printf("\n");
       return;
    }
    else{
       for(int i=nodecount;i<n;i++){
        subset[subsize]=set[i];
        ans(set,subset,n,subsize+1,total+set[i],i+1,sum);
       }
    }
}
int main(){
    int n;
    printf("entr tthe size");
    scanf("%d",&n);
    int set[100],subset[100],sum=10;
    
    for(int i=0;i<n;i++){
       scanf("%d",&set[i]);
    }

 ans(set,subset,n,0,0,0,10);

}