#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* llink;
    int info;
    struct node* rlink;
};
typedef struct node* NODE;

NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}
NODE insert(NODE root,int ele){
    NODE temp,cur,prev;
    temp=getnode();
    temp->llink=temp->rlink=NULL;
    temp->info=ele;
    if(root==NULL){
        return temp;
    }
    cur=root;
    while(cur!=NULL){
        prev=cur;
        if(ele>cur->info){
            cur=cur->rlink;
        }
        else{
            cur=cur->llink;
        }
    }
    if(ele>prev->info){
        prev->rlink=temp;
    }
    else{
        prev->llink=temp;
    }
return root;
}

void preorder(NODE root){
    NODE cur=root;
    if(cur==NULL){
        return;
    }
    printf("%d",cur->info);
    preorder(root->llink);
    preorder(root->rlink);
}

NODE delete_bst( NODE root,int ele){
    NODE cur,par;
    if(root==NULL){
        printf("the tree is empty");
        return NULL;
    }
    cur=root;
    par=NULL;
    while(cur!=NULL){
       if(cur->info==ele){
        break;
         }
        par=cur;    
      if(ele>cur->info){
        cur=cur->rlink;
      }
      else{
        cur=cur->llink;
      }
    }
 if(cur==NULL){
    printf("ele is not found");
    return cur;
 }   
//case1 if it is leaf node
if(cur->llink==NULL && cur->rlink==NULL){
  if(par->rlink==cur){
    par->rlink=NULL;
  }
  else{
    par->llink=NULL;
  }
    free(cur);
    return root;
}
//case2
if(cur->llink==NULL || cur->rlink==NULL){
  NODE cur_child=NULL;
  if(cur->rlink!=NULL){
    cur_child=cur->rlink;
  }
  else{
    cur_child=cur->llink;
  }
  if(par->rlink==cur){
      par->rlink=cur_child;
  }
  else{
    par->llink=cur_child;
  }
  free(cur);
  return root;
}
return root;
}
int main(){
    NODE root=NULL;
    int n,ele;
    printf("enter the value\n");
    scanf("%d",&n);
    printf("enter the ele");
    for(int i=0;i<n;i++){
    scanf("%d",&ele); 
    root=insert(root,ele);
    }
    printf("\n");
    preorder(root);
    printf("\n");
    delete_bst(root,10);
    printf("\n");
    preorder(root);
}