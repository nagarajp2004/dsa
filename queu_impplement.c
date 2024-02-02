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
NODE insert_rear(NODE first,int ele){
    NODE temp,cur=first;
    temp=getnode();
    temp->info=ele;
    temp->link=NULL;
    if(cur==NULL){
       return temp;
    }
    while(cur->link!=NULL){
        cur=cur->link;
    }
    cur->link=temp;
    return first;
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
    printf("the queue implementation \n");
    int ch,ele;
    while(1){
          printf("enter 1 to insert in the queu  and 2 dele and 3 to display\n");
          scanf("%d",&ch);
          switch(ch){
            case 1:
               printf("enter the element to insert \n");
               scanf("%d",&ele);
               first=insert_rear(first,ele);
               break;
            case 2:
               first=delete_front(first);
               break;
            default: 
              exit(0);   
          }

    }
}