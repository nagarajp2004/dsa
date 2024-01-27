#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* link;
};
typedef struct node* NODE;
NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}

void insert_front_h(NODE head,int item){
    NODE temp,next;
    next=head->link;
    temp=getnode();
    temp->info=item;
    temp->link=next;
    head->link=temp;
}
void insert_rear_h(NODE head,int item){
     NODE cur=head,temp;
     temp=getnode();
     temp->info=item;
     temp->link=NULL;
     while(cur->link!=NULL){
        cur=cur->link;
     }
     cur->link=temp;
}
void delete_front(NODE head){
NODE first,sec;
if(head->link==NULL){
    printf("sll is empty");
    return;
}
first=head->link;
sec=first->link;
head->link=sec;
printf("the deleted element is %d",first->info);
free(first);
}
void delete_rear(NODE head){
    NODE cur,prev;
    cur=head;
    prev=NULL;
    if(head->link==NULL){
        printf("the sll is empty\n");
        return;
    }
    while(cur->link!=NULL){
        prev=cur;
        cur=cur->link;
    }
    printf("the deleted ele is %d",cur->info);
    free(cur);
    prev->link=NULL;
}
void display_h(NODE head){
    NODE cur=head;
    cur=cur->link;
    while(cur!=NULL){
        printf("%d",cur->info);
        cur=cur->link;
    }
}
int main(){
NODE head=NULL;
int ch,ele;
head=getnode();
head->link=NULL;
while(1){
 printf("enter  1 to inser front\n 2 to inser rear \n 3 deleterear \n 4 to delete fropont \n5 idsplay \n");
 scanf("%d",&ch);
 switch(ch){
     case 1:
      printf("enter the ele\n");
      scanf("%d",&ele);
      insert_front_h(head,ele);
      break;
     case 2:
      printf(" entert je ele");
      scanf("%d",&ele);
      insert_rear_h(head,ele);
      break;
     case 3:
      delete_front(head);
      break;
     case 4:
      delete_rear(head);
      break;
     case 5:
      display_h(head);
      break;
      default:
      exit(0);       
 }
}  
}
