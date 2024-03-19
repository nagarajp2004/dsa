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

void insert_hsll_front(NODE head,int ele){
   NODE temp,next;
   temp=getnode();
   temp->info=ele;
   next=head->link;
   temp->link=next;
   head->link=temp;
}

void insert_hsll_r(NODE head,int ele)
{
  NODE temp,cur;
  temp=getnode();
  temp->info=ele;
  cur=head;
  while(cur->link!=head){
    cur=cur->link;
  }
  cur->link=temp;
  temp->link=head
}
void delete_front_hsll(NODE head)
{
      NODE first,sec;
      if(head->link==head){
           printf("empty\n");
           return;  
      }
      first=head->link;
      sec=first->link;
      printf("the delted element is %d ",first->info);
      free(first);
      head->link=sec;
}
void delete_rear_hsll(NODE head){
    NODE cur,prev;
    cur=head;
    prev=NULL;
    if(cur->link==cur){
        printf("empty sll\n");
        return;
    }
   while(cur->link!=head){
    prev=cur;
    cur=cur->link;
   }
   printf("%d is the deleted ele",cur->info);
   free(cur);
   prev->link=head;
}

void display_h_csll(NODE head){
    NODE cur=head;
    if(cur->link==cur){
        printf("empty csll\n");
        return;
    }
    cur=cur->link;
    while(cur!=head){
        printf("%d",cur->info);
        cur=cur->link;
    }
   
}
int main(){
    int ch,ele;
    NODE head;
    head=getnode();
    head->link=head;
    while(1){
    printf("enter the 1  to insert_f \n 2 to insert_r \n 3 to delete_f \n 4 to delete_r\n 5 to display\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter the ele\n");
        scanf("%d",&ele);
        insert_hsll_front(head,ele);
         break;
        case 2:
        printf("enter the ele\n");
        scanf("%d",&ele);
      insert_hsll_r(head,ele);
        break;
        case 3:
        delete_front_hsll(head);
        break;
        case 4:
       delete_rear_hsll(head);
        break;
        case 5:
        display_h_csll(head);
        break;
        default:
        exit(0);
 }   
 
}  
}
// int main(){
//     NODE head;
//     head=getnode();
//     head->link=head;
//     insert_hsll_r(head,22);
//     insert_hsll_r(head,92);
//     display_h_csll(head);
// }