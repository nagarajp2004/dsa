/*Develop a menu driven Program in C for the following operations on Doubly Linked List
(DLL) of Employee Data with the fields: SSN, Name, Dept, Designation,
Sal, PhNo
a. Create a DLL of N Employees Data by using end insertion.
b. Display the status of DLL and count the number of nodes in it
c. Perform Insertion and Deletion at End of DLL
d. Perform Insertion and Deletion at Front of DLL
e. Demonstrate how this DLL can be used as Double Ended Queue.
f. Exit*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    char name[20],ssn[20],dept[20],desig[20];
    float sal;
    long int ph;
    struct node* llink;
    struct node* rlink;
};
typedef struct node* NODE;

NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}

NODE inser_rear(NODE first){
   NODE temp,cur=first;
   temp=getnode();
   printf("enter the ssn ,name,dept,disg,sal,ph\n");
   scanf("%s%s%s%s%f%ld",temp->ssn,temp->name,temp->dept,temp->desig,&(temp->sal),&(temp->ph));
   temp->rlink=temp->llink=NULL;
   if(first==NULL){
    return temp;
   }
   while(cur->rlink!=NULL){
    cur=cur->rlink;
   }
   temp->llink=cur;
   cur->rlink=temp;
   return first;
}
 
NODE create_n(NODE first){
    int n;
    printf("enter the number of empy\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        first=inser_rear(first);
    }
    return first;  
}

NODE insert_front(NODE first){
    NODE temp,cur=first;
    temp=getnode();
    printf("enter the ssn ,name,dept,disg,sal,ph\n");
   scanf("%s%s%s%s%f%ld",temp->ssn,temp->name,temp->dept,temp->desig,&(temp->sal),&(temp->ph));
   temp->rlink=temp->llink=NULL;
   if(first==NULL){
    return temp;
   }
   temp->rlink=cur;
   cur->llink=temp;
   return temp;
}

void status(NODE first){
    NODE cur=first;
    int n=0;
    if(first==NULL){
    printf("the details is not present\n");
    return;
    }
    while(cur!=NULL){
        n++;
        cur=cur->rlink;
    }
    printf("the number of nodes is %d",n);
}
void dispaly_dll(NODE first){
    if(first==NULL)
    {
        printf("the database is empty\n");
        return ;
    }
    NODE cur=first;
    while(cur!=NULL){
     printf("ssn is %s \t name is %s \t dept is %s\t desig is %s\t\n sal is %f\t phone number :%ld\n",cur->ssn,cur->name,cur->dept,cur->desig,cur->sal,cur->ph);
     cur=cur->rlink;      
    } 
}
NODE delete_front(NODE first){
    NODE cur=first,sec;
    if(cur==NULL){
        printf("dll is empty\n");
        return NULL;
    }
    if(cur->rlink==NULL){
        printf("deleted employ details is \n");
        printf("ssn is %s \t name is %s \t dept is %s\t desig is %s\t\n sal is %f\t phone number :%ld\n",cur->ssn,cur->name,cur->dept,cur->desig,cur->sal,cur->ph);
        free(cur);
       return NULL;
    }
    sec=cur->rlink;
    printf("ssn is %s \t name is %s \t dept is %s\t desig is %s\t\n sal is %f\t phone number :%ld\n",cur->ssn,cur->name,cur->dept,cur->desig,cur->sal,cur->ph);
     free(cur);
     sec->llink=NULL;////////////////////////////imp;
     return sec;
}

NODE delete_rear(NODE first){
    if(first==NULL){
        printf("empty dll\n");
        return NULL;
    }
    NODE cur=first,prev=NULL;
    if(cur->rlink==NULL){
        printf("ssn is %s \t name is %s \t dept is %s\t desig is %s\t\n sal is %f\t phone number :%ld\n",cur->ssn,cur->name,cur->dept,cur->desig,cur->sal,cur->ph); 
        free(cur);
        return NULL; 
    }
    while(cur->rlink!=NULL){
        prev=cur;
        cur=cur->rlink;
    }
     printf("ssn is %s \t name is %s \t dept is %s\t desig is %s\t\n sal is %f\t phone number :%ld\n",cur->ssn,cur->name,cur->dept,cur->desig,cur->sal,cur->ph);
     prev->rlink=NULL;
     free(cur);
     return first;

}
int main(){
    NODE first=NULL;
    int ch,ele;
    while(1){
        printf("enter 1 to create N students  \n 2 status of dLL\n 3 insert front \n 4 to insert rear\n 5 to delete front \n 6 delete rare \n 7 display ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
              first=create_n(first);
              break;
            case 2:
              status(first);
              break;
            case 3:
             first=insert_front(first);
             break;
             
            case 4:
              first=inser_rear(first);
              break;
             case 5:
              first=delete_front(first);
              break;
             case 6:
              first=delete_rear(first);
              break;
            case 7:
             dispaly_dll(first);
             break;
              default:
              exit(0);           
        }        
    }   
}
