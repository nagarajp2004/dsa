#include<stdio.h>
#define mz 3
void insert_cq(int q[mz],int*rear ,int*count){
int ele;
printf("enter he element\n");
scanf("%d",&ele);
if((*count)==mz){
printf("overflow");
return ;
}
*rear=(*rear+1)%mz;
q[*rear]=ele;
(*count)++;
}
void disaply(int q[mz],int front,int count){
    for(int i=0;i<count;i++){
        printf("%d",q[front]);
        front=(front+1)%mz;
    }
}
int main(){
    int q[mz],rear=mz-1,front=0;
    int count=0;
   
}