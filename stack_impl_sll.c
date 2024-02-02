#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node * link;
};
typedef struct node* NODE;
NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL){
        exit(0);
    }
    return x;
}
NODE insert_front( NODE first,int ele){
    NODE temp;
    temp=getnode();
    temp->info=ele;
    temp->link=first;
    return  temp;
}
NODE delete_front(NODE first){
    NODE next=first->link;
    if(first==NULL){
        printf("empty sll\n");
        return NULL;
    }
    printf("the deleted element is %d\n",first->info);
    free(first);
    return next;
}
int main(){
    NODE first=NULL;
    printf("the stack implementation \n");
    int ch,ele;
    while(1){
          printf("enter 1 to push and 2 pop and 3 to display\n");
          scanf("%d",&ch);
          switch(ch){
            case 1:
               printf("enter the element to push \n");
               scanf("%d",&ele);
               first=insert_front(first,ele);
               break;
            case 2:
               first=delete_front(first);
               break;
            default: 
              exit(0);   
          }

    }
}