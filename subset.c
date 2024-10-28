#include<stdio.h>

void sub(int set[],int subset[],int n,int subsize,int total,int nodecount,int sum){
    if(sum==total){
        printf("the subset is found");
        for(int i=0;i<subsize;i++){
            printf("%d",subset[i]);
        }
        printf("\n");
        return ;
    }
    else{
        for(int i=nodecount;i<n;i++){
            subset[subsize]=set[i];
            sub(set,subset,n,subsize+1,total+set[i],nodecount+1,sum);
        }
    }
}
int main(){
    int set[10],subset[10];
    int n,sum;
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
     printf("Enter the elements of the set:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }
   printf("Enter the sum to find subset for: ");
    scanf("%d", &sum);
    sub(set, subset, n, 0, 0, 0, sum);


}