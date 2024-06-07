#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node * link;
};
 typedef struct node *NODE;

 NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL){
        exit(0);
    }
    return x;
 }

NODE insert_front(NODE first,int ele){
    NODE temp;
    temp=getnode();
    temp->info=ele;
    temp->link=first;
    return temp;
}

NODE insert_rear(NODE first,int ele){
    NODE temp,cur;
    temp=getnode();
    temp->link=NULL;
    temp->info=ele;
    if(first==NULL){
        return temp;
    }
    cur=first;
    while(cur->link!=NULL){
   cur=cur->link;
    }
    cur->link=temp;
    return first;
}
NODE delete_front(NODE first){
    NODE next;
    if(first==NULL){
        printf("empty");
        return NULL;
    }
    if(first->link==NULL){
       printf("the deletged ele is %d",first->info);
       free(first);
       return NULL;
    }
    next=first->link;
    printf("the deleted ele is %d",first->info);
    free(first);
    return next;
}

NODE delete_rear(NODE first){
    NODE cur;
    if(first==NULL){
        printf("empty\n");
        return NULL;
    }
    if(first->link==NULL){
        printf("the deleted ele is %d",first->info);
        free(first);
        return NULL;
    }
    NODE prev=NULL;
    cur=first;
    while(cur->link!=NULL){
        prev=cur;
        cur=cur->link;
    }
    printf("the deletd ele is %d",cur->info);
    prev->link=NULL;
    return first;
}

void display(NODE first){
    NODE cur=first;
    if(first==NULL){
        printf("empty sll");
        return ;
    }
    while(cur!=NULL){
        printf("%d",cur->info);
        cur=cur->link;
    }
    
}

int main(){
     NODE first=NULL;
     first=insert_front(first,33);
     first=insert_front(first,454);
     first=insert_rear(first,55);
     display(first);
     printf("\n\n");
     first=delete_front(first);
     first=delete_rear(first);
     first=delete_rear(first);
     first=delete_rear(first);


}