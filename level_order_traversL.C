#include<stdio.h>
#include<stdlib.h>
#define max 10
struct node{
    int info;
    struct node* rlink;
    struct node* llink;
};

typedef struct node* NODE;

NODE getnode(){
  NODE temp;
  temp=(NODE)malloc(sizeof(struct node));
  return temp;
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

void level_order(NODE root){
NODE q[max],cur,temp;
int front=0,rear=-1;
if(root==NULL){
    printf("empty\n");
    return;
}
cur=root;
q[++rear]=cur;
for(;;){
    if(front>rear){
        return;
    }
   temp=q[front++];
   printf("%d",temp->info);
   if(temp->llink!=NULL){
    q[++rear]=temp->llink;
   }
   if(temp->rlink!=NULL){
    q[++rear]=temp->rlink;
   }
}

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
    printf("level orde\n");
    level_order(root);
    }