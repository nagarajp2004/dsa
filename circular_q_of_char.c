#include<stdio.h>
#define max 3
#include<stdlib.h>
void insert_cq(char cq[max],int* rear,int* count)
{
 char c;
 printf("enter the char\n");
 scanf(" %c",&c);
 if((*count)==max){
    printf("overflow\n");
    return;
 }
 (*rear)=((*rear)+1)%max;
 cq[*rear]=c;
 (*count)++;
}

void delete_cq(char cq[max],int*front,int*count){
    char c;
    if((*count)==0){
        printf("underflow\n");
        return;
    }
    c=cq[*front];
    (*front)=((*front)+1)%max;
    (*count)--;
    printf("the deleted ele is %c",c);
}

void display_cq(char cq[max],int front,int count){
    if(count==0){
        printf("no element\n");
        return;
    }
    printf("the ele of cq are:\n");
    for(int i=0;i<count;i++){
        printf("%c\n",cq[front]);
        front=(front+1)%max;
    }
}
void status_cq(int count){
    if(count==0){
        printf("it is empty queu\n");
        return;
    }
    printf("%d is the number of ele used in cir que\n",count);
    printf("%d is the number of empty in cq",max-count);  

}
int main(){
    char cq[max];
    int ch,rear=-1,front =0,count=0;
    while(1){
        printf("enter 1 to insert\n 2 to  del \n  3 to display \n 4 -to satus \n 5 to exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
             insert_cq(cq,&rear,&count);
             break;
            case 2:
             delete_cq(cq,&front,&count);
             break;
            case 3:
             display_cq(cq,front,count);
             break;
            case 4:
              status_cq(count);
              break;
            default:
             exit(1);     
        }
    }
}

