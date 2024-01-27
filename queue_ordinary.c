#include<stdlib.h>
#include<stdio.h>
#define maz_size 3
void que_insert(int q[maz_size],int*r){
    int ele;
    printf("enter he ele\n");
    scanf("%d",&ele);
    if(*r==maz_size-1){
        printf("overflow");
        return ;
    }
    (*r)++;
    q[*r]=ele;
}
void display(int q[maz_size],int front,int rear){
    if(front>rear){
        printf("the q is empty");
        return ;
    }
    for(int i=front;i<=rear;i++){
        printf("%d\t",q[i]);
    }
}
void del_q(int q[maz_size],int*front,int rear){
    if(*front>rear){
        printf("the q ia empty\n");
        return;
    }
    printf("the deleted element is %d",q[*front]);
    (*front)++;
}

int main(){
    int rear=-1,front=0;
    int q[maz_size],ch;
    while(1){
    printf("enter 1 to insert \n 2 to delete \n dispay");
    scanf("%d",&ch);

    switch(ch){
        case 1:
        que_insert(q,&rear);
        break;

        case 2:
        del_q(q,&front,rear);
        break;

        case 3:
        display(q,front,rear);
        break;

        default:
        exit(0);                                                                                          
    }}}
