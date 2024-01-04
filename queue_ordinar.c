#include<stdio.h>
#define max_size 3
#include<stdlib.h>
void queu_insert(int q[max_size],int *rear)
{
    int ele;
    scanf("%d",&ele);
    if((*rear)==max_size-1){
        printf("the queue is full\n");
        return;

    }
    (*rear)++;
    q[*rear]=ele;
}
void q_delete(int q[max_size],int *front,int rear)
{
 int ele;
 if((*front)>rear){
    printf("the queue is empty");
    return;
 }
 ele=q[*front];
 printf("the deleted ele is %d",ele);
 (*front)++;
}
void display(int q[max_size],int front,int rear)
{
    if(front>rear)
    {
        printf("the queue is empty");
        return;
    }
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t ",q[i]);
    }

}
int main(){
 int q[max_size],rear=-1;
 int front =0;
 int ch;
 while(1){
 printf("enter 1 to insert \n 2. to delete \n 3.display,\n 4.exit");
 scanf("%d",&ch);
 switch(ch){
    case 1:
     queu_insert(q,&rear);
     break;
     case 2:
     q_delete(q,&front,rear);
     break;
     case 3:
    display(q,front,rear);
    break;
    default:
     exit(0) ;
 }
 
 }   
}