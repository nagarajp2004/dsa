#include<stdlib.h>
#include<stdio.h>
struct node {
int info;
struct node* link;
};
typedef struct node* NODE;

NODE getnode(){
 NODE x;
 x=(NODE)malloc(sizeof(struct node));
 if(x==NULL){
    printf("memory is not allocated");
    exit(0);
 } 
return x;
}

NODE insert_front(NODE first,int ele){
    NODE temp;
    temp=getnode();
    temp->info=ele;
    temp->link=NULL;
    temp->link=first;
    return temp;
} 
void display(NODE first){
 NODE next=first;
 if(next==NULL){
    printf("the sll is empty  sll");
    return ;
 }
 while(next!='\0'){
    printf("%d\t",next->info);
    next=next->link;
 }
}
NODE insert_rear(NODE first,int ele){
    NODE temp,prev=NULL,cur=first;
    temp=getnode();
    temp->info=ele;
    temp->link=NULL;
    while(cur!='\0'){
        prev=cur;
        cur=cur->link;
    }
    if(first==NULL){
          return temp;
    }
    prev->link=temp;
    return first;
}
NODE delete_front(NODE first){
  int ele;
 NODE next;
 if(first==NULL){
    printf("ewmpty sll");
    return first;
 } 
 ele=first->info;
 next=first->link;
 free(first);
 printf("the deleted elemi is %d",ele);
 return next;
 }
 NODE delete_rear(NODE first)
 {
int ele;
NODE cur=first,prev=NULL;
if(first==NULL){
    printf("empty sll");
    return first;
}
if(first->link==NULL){
    ele=first->info; 
    printf("the deleted ele is %d",ele);
    free(first);
    return NULL;
}

if(cur->link!=NULL){
    prev=cur;
    cur=cur->link;
}
ele=cur->info;
printf("the  deleted ele is %d",ele);
free(cur);
prev->link=NULL;
return first;
}


int main(){
    NODE first=NULL;
    first=getnode();
    first->info=33;
    first->link=NULL;

    display(first);
    first=delete_rear(first);
    display(first);
}


