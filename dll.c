#include<stdio.h>
#include<stdlib.h>
struct node  
{
   int info;
   struct node *rlink;
   struct node *llink;
};
typedef struct node* NODE;

NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}

NODE insert_front(NODE first,int n){
 NODE temp;
 temp=getnode();
 temp->info=n;
 temp->llink=temp->rlink=NULL;
 if(first==NULL){
    return temp;
 } 
temp->rlink=first;
first->llink=temp;
return temp;
}

NODE insert_rear(NODE first,int n){
    NODE temp,cur;
    temp=getnode();
    temp->info=n;
    temp->rlink=temp->llink=NULL;
    cur=first;
    if(cur==NULL){
        return temp;
    }
    while(cur->rlink!=NULL){
        cur=cur->rlink;
    }
    cur->rlink=temp;
    temp->llink=cur;
    return first;
}

NODE delete_front(NODE first){
 NODE cur,next;
 if(first==NULL){
    printf("the dll is empty\n");
    return NULL;
 }
 if(first->rlink==NULL){
    printf("the deleted ele is %d",first->info);
    free(first);
    return NULL;
 }
 next=first->rlink;
 printf("the deleted ele is %d",first->info);
next->llink=NULL;
free(first);
return next;
 }

NODE delete_rear(NODE first){
    NODE cur,prev;
    if(first==NULL){
        printf("the dll  is empty\n");   
        return NULL;
    }
    if(first->rlink==NULL){
        printf("the deleted elemented is %d",first->info);
        free(first);
        return NULL; 
    }
    cur=first;
    prev=NULL;
    while(cur->rlink!=NULL){
        prev=cur;
        cur=cur->rlink;
    }
    printf("the dele is %d",cur->info);
    free(cur);
    prev->rlink=NULL;
    return first;
}

void display(NODE  first){
    if(first==NULL){
        printf("empty\n");
        return ;
    }
    NODE cur=first;
    while(cur!=NULL){
        printf("%d",cur->info);
        cur=cur->rlink;
    }

}
int main(){
    int ch,n;
    NODE first=NULL;//???????????????????????imp??????????????????????///
    while(1){
        printf("1 to insertf,2 to ir,3 to df,4 to dr,5 to d,6 e");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
             printf("enter the ele;");
             scanf("%d",&n);
             first=insert_front(first,n);
             break;
             case 2:
              printf("enter the ele;");
             scanf("%d",&n);
             first=insert_rear(first,n);
             break;
             case 3:
             first=delete_front(first);
             break;
             case 4:
             first=delete_rear(first);
             break;
             case 5:
             display(first);
             break;
             default:
             exit(0);
        }
    }
}

