#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node* link;
};
typedef struct node* NODE;
NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}
NODE insert_front(NODE last,int ele)
{
NODE temp,next;
temp=getnode();
temp->info=ele;
if(last==NULL)
 last=temp;

else
{
next=last->link;
temp->link=next;
}
last->link=temp;
return last;
}

NODE insert_rear(NODE last,int ele)
{
NODE temp,next;
temp=getnode();
temp->info=ele;
if(last==NULL){
    temp->link=temp;
    return temp;
}
next=last->link;
last->link=temp;
temp->link=next;
return temp;
}

NODE delete_front(NODE last)
{
NODE first,sec;
if(last==NULL)
{
    printf("empty sll\n");
    return NULL;
}
if(last->link==last){
    printf("the deletd ele is%d",last->info);
    free(last);
    return NULL;
}
first=last->link;
sec=first->link;
printf("the deleted ele is%d",first->info);
free(first);
last->link=sec;
return  last;
}

NODE delete_rear(NODE last){
    if(last==NULL){
        printf("empty csll\n");
        return NULL;
    }
    if(last->link==last){
        printf("the deleted ele is %d\n",last->info);
        free(last);
        return NULL;
    }
    NODE temp=last->link;

    while(temp->link!=last){
         temp=temp->link;
    }
    temp->link=last->link;
    printf("the deleted ele is %d",last->info);
    free(last);
    return temp;
}
void display(NODE last){
    if(last==NULL){
        printf("cll is empty\n");
        return ;
    }
    NODE temp=last->link;
     while(temp!=last){
        printf("%d\t",temp->info);
        temp=temp->link;
     }
     printf("%d\t",last->info);
}
int main(){
 NODE last=NULL;////////////////imp///////////////////////////////////////
 int ch,ele;
 while(1){
    printf("enter the 1  to insert_f \n 2 to insert_r \n 3 to delete_f \n 4 to delete_r\n 5 to display\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter the ele\n");
        scanf("%d",&ele);
         last=insert_front(last,ele);
         break;
        case 2:
        printf("enter the ele\n");
        scanf("%d",&ele);
        last=insert_rear(last,ele);
        break;
        case 3:
        last=delete_front(last);
        break;
        case 4:
        last=delete_rear(last);
        break;
        case 5:
        display(last);
        break;
        default:
        exit(0);
 }   
 
}  
}