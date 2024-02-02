 #include<stdio.h>
 #include<stdlib.h>
 struct node{
    int info;
    struct node* link;
 };
 typedef struct node* NODE;
 NODE getnode()
 {
  NODE x;
  x=(NODE)malloc(sizeof(struct node));
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
    NODE  temp,next=first;
    temp=getnode();
    temp->info=ele;
    temp->link=NULL;
    if(first==NULL){
       return temp;
    }
    while(next->link!=NULL)
    { 
       next=next->link;
    }
    next->link=temp;
    return first;      
}
NODE delete_front(NODE first)
{
 NODE next=first;
 if(first==NULL){
    printf("empty sll");
    return NULL;
}
 printf("the deleted ele is %d", next->info);
 next=next->link;
 free(first);
 return next;
}
NODE delete_rear(NODE first){
    NODE cur,prev;
    cur=first;
    prev=NULL;
    if(first==NULL){
        printf("empty sll");
        return NULL; 
    }
    if(first->link=NULL){
        printf("the deleted ele is%d",first->info);
        free(first);
        return NULL;
    }
    while(cur->link!=NULL){
        prev=cur;
        cur=cur->link;
    }
    printf("the deleted ele is %d",cur->info);
    
    free(cur);
    prev->link=NULL;
    return first;
}
void dispaly(NODE first){
   NODE next=first;
   while(next!=NULL){
    printf("%d",next->info);
    next=next->link;
   }

}

  int main(){
    NODE first=NULL;//imp
    first=insert_front(first,33);
  
  
    printf("\n\n\n\n");
    dispaly(first);
    
    first=delete_rear(first);
    
  }

