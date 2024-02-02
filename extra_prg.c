#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  struct node *link;
};
typedef struct node* NODE;
NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
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
NODE conc(NODE first ,NODE sec){
    NODE res;
    res=NULL;
    NODE cur=first,next=sec;
    while(cur!=NULL){
        res=insert_rear(res,cur->info);
        cur=cur->link;
    }
    while(next!=NULL){
        res=insert_rear(res,next->info);
        next=next->link;
    }
    return res;
}
NODE rev_sll(NODE first){
    NODE rev=NULL,cur,temp;
    cur=first;
    while(cur!=NULL){
      temp=getnode();
      temp->info=cur->info;
      temp->link=rev;
      rev=temp;
      cur=cur->link;
    }
return rev;
}
void sort(NODE first) {
    NODE cur = first, next;
    int n = 0;

    while (cur != NULL) {
        n++;
        cur = cur->link;
    }

    for (int i = 0; i < n - 1; i++) {
        next = first;
        for (int j = 0; j < n - 1 - i; j++) {
            if (next->info > (next->link)->info) {
                int temp = next->info;
                next->info = (next->link)->info;
                (next->link)->info = temp;
            }
            next = next->link;
        }
    }
}
void display(NODE first){
    NODE cur=first;
    while(cur!=NULL){
        printf("%d",cur->info);
        cur=cur->link;
    }
}
int main(){
    NODE f=NULL;
      f=insert_rear(f,44);
      f=insert_rear(f,6);
      f=insert_rear(f,77);
      display(f);
      sort(f);
      display(f);
}