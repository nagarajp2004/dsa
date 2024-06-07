#include<stdio.h>
#define qmax 3
void insert_q(int q[10],int *rear){
    int ele;
    scanf("%d",&ele);
    if(*rear==qmax-1){
        printf("overflow\n");
        return;
    }
    (*rear)++;
    q[*rear]=ele;
}
void deleteq(int q[10],int *front,int rear){
    int ele;
    if(*front>rear){
        printf("underflow condition\n");
        return;
    }
    printf("the deleted ele is %d",q[*front]);
    (*front)++;
}
void display(int q[10],int front,int rear){
    printf("display");
   
    for(int i=front;i<=rear;i++){
        printf("%d",q[i]);
    }
}
int main(){
    int q[qmax],front=0,rear=-1,ch;
   printf("etnr the 1 to inseertt 2 to delet 3 to display \n") ;
  while(1){  
    scanf("%d",&ch);
    switch(ch){
        case 1:
            insert_q(q,&rear);
            break;
           case 2:
           deleteq(q,&front,rear);
           break;
         case 3:
         display(q,front,rear); 
         break;         
    }
  }
    
}