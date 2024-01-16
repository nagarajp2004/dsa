#include<stdio.h>
#include<stdlib.h>
#define max 5
void qinsert(int q[max],int *rear){
    int ele;
    printf("etnr the element ");
    scanf("%d",&ele);
    if((*rear)==max-1){
        printf("overflow");
        return;
    }
    (*rear)++;
    q[*rear]=ele;
}
void qdelete(int q[max],int* front,int rear){
    int ele;
    if((*front)>rear){
        printf("underflow ");
    }
    ele=q[*front];
    printf("the poped ele is%d",ele);
     (*front)++;
}
void display(int q[max],int front,int rear){
    if(front >rear){
        printf("the q is empty");
    }
   else{
    for(int i =front;i<=rear;i++){
         printf("%d\t\t",q[i]);
    }
   }
}
int main(){
    int rear=-1,front =0;
    int q[max],ch;
    for(;;){
    
    printf("enter the choice 1 for push\n2 to pop \n3 display\n 4 exit " );
    scanf("%d",&ch);
    switch(ch){
        case 1:
       qinsert(q,&rear);
        break;
        case 2:
    qdelete(q,&front,rear);
        break;
        case 3:
        display(q,front,rear);
        break;
        exit(0);
    
    }
    }
}

