
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* llink;
    struct node* rlink;    
};
typedef struct node* NODE;
NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}
NODE accept(NODE root,int ele){
  NODE temp,cur,prev;
  temp=getnode();
  temp->info=ele;
  temp->rlink=temp->llink=NULL;
  if(root==NULL){
    return temp;
  }
  cur=root;
  prev=NULL;
  while(cur!=NULL){
    prev=cur; 
  if( ele<cur->info){
       cur=cur->llink;
  }
  else{
    cur=cur->rlink;
  }
  }
  if(ele<prev->info){
    prev->llink=temp;
  }
else{
    prev->rlink=temp;
}
return root;
}
void preorder(NODE root){
  if(root==NULL){
    return;
  }
  printf("%d\t",root->info);
  preorder(root->llink);
  preorder(root->rlink);
}
void inorder(NODE root){
  if(root==NULL){
    return ;

  }
  inorder(root->llink);
  printf("%d\t",root->info);
  inorder(root->rlink);
}

void postorder(NODE root){
  if(root==NULL){
    return ;
  }
  inorder(root->llink);
  inorder(root->rlink);
  printf("%d\t",root->info);
}

int main(){
    NODE root=NULL;
    int n,ch,i,ele;
    printf("enter the numbwer ele\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
      printf("etner the ele\n");
      scanf("%d",&ele);
      root=accept(root,ele);
    }
    printf("preorder");
    preorder(root);
    printf("inorder\n");
    inorder(root);
    printf("postorer\n");
    postorder(root);
}