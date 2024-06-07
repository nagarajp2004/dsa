#include<stdio.h>
#include<stdlib.h>
 struct node
 {
    struct node* llink;
    int info;
    struct node* rlink;
 };
 typedef struct node* NODE;
 
 NODE insert_t(NODE root,int ele){
    NODE cur=root,prev=NULL,temp;
    temp=getnode();
    temp->info=ele;
    temp->rlink=temp->llink=NULL;
    
    while(cur!=NULL){
       prev=cur;
       if(cur->info>ele){
        cur=cur->llink;
       }
       else{
        cur=cur->rlink;
       }
    }
    if(prev->info>ele){
        prev->llink=temp;
    }
    else{
        prev->rlink=temp;
    }
 }

void preorder(NODE root){
    if(root==NULL){
        return ;
    }
    printf("%d",root->info);
    preorder(root->llink);
    preorder(root->rlink);
}

