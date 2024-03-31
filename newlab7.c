#include<stdlib.h>
#include<stdio.h>
struct node{
    char usn[20],name[20],branch[20];
    int sem;
    long long int ph;
    struct node* link;
};
typedef struct node* NODE;
NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}
void insert(NODE temp){
    printf("etnr rthe usn name branch\n ");
    scanf("%s%s%s",temp->usn,temp->name,temp->branch);
    printf("enter the sem\n");
    scanf("%d",&temp->sem);
    printf("enter the ph\n");
    scanf("%lld",&temp->ph);
    temp->link=NULL; 
}

NODE insert_front(NODE first){
    NODE temp;
    temp=getnode();
    insert(temp);
    temp->link=first;
    return temp;
}

NODE insert_rear(NODE first){
    NODE temp,cur;
    temp=getnode();
    insert(temp);
    if(first==NULL){
        return NULL;
    }
    cur=first;
    while(cur->link!=NULL){
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}
 void ddisplay(NODE temp){
    printf("the deleted details is \n");
    printf("nmae is %s",temp->name);
 }

NODE delete_front(NODE first){
  NODE cur;
  if(first==NULL){
    return NULL;

  }
   if(first->link==NULL){
    ddisplay(first);
    return NULL;
   }
   cur=first->link;
   ddisplay(first);
   free(first);
   return cur;
}
NODE delete_rear(NODE first){
    
}

int main(){

}