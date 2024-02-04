#include<stdio.h>
#include<stdlib.h>
struct node
{
char USN[10], name[20], branch[10];
int sem;
long long int ph;
struct node *link;
};
typedef struct node* NODE;

NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL){
        exit(0);
    }
    return x;
}
NODE insert_front(NODE first){
    NODE temp;
    temp=getnode();
    printf("enter the name usn branch\n");
    scanf("%s%s%s",temp->name,temp->USN,temp->branch);
    printf("enter the sem\n");
    scanf("%d",&(temp->sem));
    printf("enter the ph number\n");
    scanf("%lld",&(temp->ph));
    temp->link=first;
    return temp;
}

NODE insert_rear(NODE first){
    NODE temp,cur;
    cur=first;
    temp=getnode();
    temp->link=NULL;
    printf("enter the name usn branch\n");
    scanf("%s%s%s",temp->name,temp->USN,temp->branch);
    printf("enter the sem\n");
    scanf("%d",&(temp->sem));
    printf("enter the ph number\n");
    scanf("%u",&(temp->ph)); 
    if(first==NULL){
        return temp;
    }
  
    while(cur->link!=NULL){
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}

NODE delete_front(NODE first){
    NODE next;
    if(first==NULL){
        printf("empty sll\n");
        return NULL;
    }
    next=first->link;
    printf("the deleted student detail is\n");
    printf("name:%s\nusn:%s\nbranch:%s\n",first->name,first->USN,first->branch);
    printf("sem:%d\nph:%ld\n",first->sem,first->ph);
    free(first);
    return next;
}
NODE delete_rear(NODE first){
    NODE cur,prev;
    cur=first;
    prev=NULL;
    if(first==NULL){
        printf("the sll is empty\n");
        return NULL;
    }

    if(first->link==NULL){
    printf("the deleted student detail is\n");
    printf("name:%s\nusn:%s\nbranch:%s\n",first->name,first->USN,first->branch);
    printf("sem:%d\nph:%ld\n",first->sem,first->ph);
    free(first);
    return NULL;
    } 
    while(cur->link!=NULL){
        prev=cur;
        cur=cur->link;
    }
    printf("the deleted student detail is\n");
    printf("name:%s\nusn:%s\nbranch:%s\n",cur->name,cur->USN,cur->branch);
    printf("sem:%d\nph:%ld\n",cur->sem,cur->ph);
    free(cur);
    prev->link=NULL;
    return first; 
}

void status(NODE first){
    int count=0;
    NODE cur=first;
    if(first==NULL){
        printf("the sll is empty\n");
    }
    while(cur!=NULL){
        count++;
        cur=cur->link;
    }
    printf("the number of student detailes enterd is %d\n",count);
}

void display(NODE first){
    NODE cur;
    cur=first;
    if(first== NULL){
        printf("empty sll\n");
        return ;
    }
    while(cur!=NULL){
    printf("name:%s\nusn:%s\nbranch:%s\n",cur->name,cur->USN,cur->branch);
    printf("sem:%d\nph:%lld\n",cur->sem,cur->ph);
    cur=cur->link;
    }
}

 NODE create(NODE first){
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
     for(int i=0;i<n;i++){
        first=insert_front(first);
     } 
    return first; 
 }

 int main(){
    NODE first=NULL;
    int ch;
    while(1){
        printf("1. Create N students\n2. Status of SLL\n");
        printf("3. Insert front\n4. Insert rear\n5. Delete front\n");
        printf("6. Delete rear\n7. Display\n8. Exit\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
              first=create(first);
              break;
            case 2:
               status(first);
               break;
            case 3:
                first=insert_front(first);
                break;
            case 4:
                first=insert_rear(first);
                break;
            case 5:
                first=delete_front(first);
                break;
            case 6:
                first=delete_rear(first);
                break;
            case 7:
                display(first);
                break;
            default:
                exit(0);                        
        }

    }
 }