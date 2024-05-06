#include<stdio.h>
#define max 3
void insert_cq(int cq[max],int *rear,int *count){
    int ele;
    printf("etnr the ele\n");
    scanf("%d",&ele);
    if(*count==max){
        printf("overflow\n");
        return;
    }
    (*rear)=((*rear)+1)%max;
    (*count)++;
     cq[*rear]=ele;
}
void delete_cq(int cq[max],int *front,int *count){
  int ele;
  if(*count==0){
    printf("underflow\n");
    return;
  }
  ele=cq[*front];
  *front=(*front+1)%max;
  (*count)--;
  printf("the deleted ele is %d",ele);
}

void display(int cq[max],int front,int count){
    for(int i=0;i<count;i++){
        printf("%d",cq[front]);
        front=(front+1)%max;
    }
}

int main(){
    int cq[max],ch,front=0,rear=-1,count=0;
    printf("etnr the 1 to insert 2 del;ete 3 display\n");
    while(1){
        scanf("%d",&ch);
       switch(ch){
        case 1:
           insert_cq(cq,&rear,&count);
           break;
        case 2:
          delete_cq(cq,&front,&count);
          break;
         case 3:
            display(cq,front,count);
       }

        }
    
}