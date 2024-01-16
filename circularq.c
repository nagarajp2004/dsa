#include<stdio.h>
#include<stdlib.h>
#define max 4
void insertcq(int cq[max],int *rear,int *count){
    int ele;
    printf("enter the element");
    scanf("%d",&ele);
    if(*count==max){
        printf("overflow");
        return;
    }
    *rear=((*rear)+1)%max;
    cq[*rear]=ele;
    (*count)++;
}
void deletecq(int cq[max],int* front,int*count){
    int ele;
    if(*count==0){
        printf("underflow");
        return;
    }
    ele=cq[*front];
    *front=(*front+1)%max;
    (*count)--;
    printf("the deleted eleis %d",ele);
}
void displaycq(int cq[max],int front,int count ){
    for(int i=0;i<count;i++){
        printf("%d\n",cq[front]);
        front=(front+1)%max;
    }
}

int main(){
    int front=0,rear=-1;
    int cq[max],ch,count=0;
    while(1){
  printf("enter 1 to insert\n 2 deleted \n 3.display \n 4 exit");
  scanf("%d",&ch);
  switch(ch){
    case 1:
     insertcq(cq,&rear,&count);
     break;
     case 2:
     deletecq(cq,&front,&count);
     break;
     case 3:
     displaycq(cq,front,count);
     break;
     default:
     exit(0);
  }}



    }



