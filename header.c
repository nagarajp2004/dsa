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
void insert_front(NODE head,int ele){
    NODE temp,next;
    next=head->link;
    temp=getnode();
    temp->info=ele;
    temp->link=next;
    head->link=temp;

}
void insert_rear(NODE head,int ele){
    NODE temp,cur=head;
    temp=getnode();
    temp->info=ele;
    while(cur->link!=NULL){
        
    }

}