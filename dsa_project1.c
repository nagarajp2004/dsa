#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char name[50];
    char phone[15];
    struct node *link;
};

typedef struct node* NODE;

NODE getnode(){
    NODE x=(NODE)malloc(sizeof(struct node));
    if(x==NULL){
        exit(0);
    }
    return x;
}



void swapconatacts(NODE a,NODE b){
    char tempname[50];
    char temp_ph[50];
    strcpy(tempname,a->name);
    strcpy(temp_ph,a->phone);
    strcpy(a->name,b->name);
    strcpy(a->phone,b->phone);
    strcpy(b->name,tempname);
    strcpy(b->phone,temp_ph);
}

void sort_contact(NODE first){
    if(first==NULL || first->link==NULL){
        return;
    }
    NODE cur=first;
    int swap_occured;
    do{
        swap_occured=0;
        cur=first;
    while(cur->link!=NULL){
        if(strcmp(cur->name,(cur->link)->name)>0){
            swapconatacts(cur,cur->link);
            swap_occured=1;
        }
        cur=cur->link;
    }

}while(swap_occured);
}
NODE add_contact(NODE first){
    NODE temp;
    temp=getnode();
    printf("enter the name and phone number\n");
    scanf("%s",temp->name);
    scanf("%s",temp->phone);
    temp->link=first;
    return temp;
}

void display_all(NODE first){
    if(first==NULL){
        printf("empty contacts\n");
        return ;
    }
    sort_contact(first);
    NODE cur=first;
    while(cur!=NULL){
       printf("name : %s \t\t ph:%s\t\n",cur->name,cur->phone);
       cur=cur->link;
    } 
}

NODE delete_or_search(NODE first, char n[50], int flag){   
    if(first==NULL){
        printf("empty contact list\n");
        return NULL;
    }
    NODE cur=first,prev=NULL,next;
    if(strcmp(first->name,n)==0 && first->link==NULL){
        printf("name : %s \t\t ph:%s\t\n",first->name,first->phone);
        if(flag==1){
            printf("deleted suucessfull\n");
            free(first);
            return NULL;
        } else {
            printf("search is sucessfull \n");
            return first;
        }
    }
    while(cur!=NULL){
        if(strcmp(cur->name,n)==0){
            printf("name : %s \t\t ph:%s\t\n",cur->name,cur->phone);
            if(flag==1){
                next=cur->link;
                if(prev==NULL){
                    free(cur); 
                    printf("deleted suucessfull\n");
                    return next; 
                }
                prev->link=next;
                free(cur); 
                printf("deleted suucessfull\n");
                return first;   
            } else {
                 printf("search is sucessfull \n");
                return first;
            }
        }
        prev=cur;
        cur=cur->link;
    }
    printf("the details are not present\n");
    return first;
}



int main(){
    NODE first=NULL;
    int choice;
    char name[50];
    int flag;
    while(1){
   
        printf("\nMenu\n1. Add Contact\n2. Display All Contacts\n3. Search Contact\n4. Delete Contact\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                first=add_contact(first);
                break;
            case 2:
                display_all(first);
                break;
            case 3:
                printf("Enter the name to search: ");
                scanf("%s", name);
                first = delete_or_search(first, name, 0);
                break;
            case 4:
                printf("Enter the name to delete: ");
                scanf("%s", name);
                first = delete_or_search(first, name, 1);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

