#include<stdio.h>
#define max 3
#include<stdlib.h>

void insert_cq(char cq[max],int *rear,int* count){
    char c;
    printf("enter the char\n");
    scanf(" %c",&c);
    if(*count==max){
        printf("inseertion is not posiible\n");
        printf("overflow\n");
       return;
    }
    (*rear)=((*rear)+1)%max;
    cq[*rear]=c;
    (*count)++;
}

void delete(char cq[max],int *front,int* count){
    char c;
    if((*count)==0){
        printf("underflow\n");
        return ;
    }
    c=cq[*front];
    *front=((*front)+1)%max;
    (*count)--;
    printf("the deleted %c",c);
}

void display(char cq[max],int front,int count){
    if(count==0){
        printf("empty");
        return ;
    }
    printf("the elements of cq\n");
    for(int i=0;i<count;i++){
        printf("%c",cq[front]);
        front=(front+1)%max;
    }
}

int main(){
    char cq[max];
    int ch,rear=-1,front=0,count=0;
    while(1){
        printf("enter the 1 to insert \n 2 to dele \n 3 display\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            insert_cq(cq,&rear,&count);
            break;
            case 2:
            delete(cq,&front,&count);
            break;
            case 3:
            display(cq,front,count);
        }
    }
}