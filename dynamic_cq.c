#include<stdio.h>
#include<stdlib.h>
int mz=3;
int* insert_cq(int cq[mz],int *front,int* rear,int *count){
    int ele,i;
    printf("enter the element\n");
    scanf("%d",&ele);
    if(*count==mz){
       mz=mz+1;
       cq=(int*)realloc(cq,sizeof(int)*mz);
          if(*front>*rear){
            for(i=mz-2;i>=*front;i--){
                cq[i+1]=cq[i];
            }
            (*front)++;
        }
  
     }
     (*rear)=((*rear)+1)%mz;
     cq[*rear]=ele;
     (*count)++;
     return cq;
}
int main(){
 int* cq;
 cq=(int*)malloc(sizeof(int)*mz);
 int front=0,rear=mz-1,count=0;
 cq=insert_cq(cq,&front,&rear,&count);
 cq=insert_cq(cq,&front,&rear,&count);
 cq=insert_cq(cq,&front,&rear,&count);
cq=insert_cq(cq,&front,&rear,&count);
 printf("%d",cq[3]);
}