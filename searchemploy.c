#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef
struct emp{
int sid;
char name[20];

}E;
void accept( E e[10],int n){
    printf("enter the details of employs");
    for(int i=0;i<n;i++){
      printf("enter the name and sid\n");  
      scanf("%s%d",e[i].name,&e[i].sid);
    }
}
void display(E e[10],int n){
    printf("employ details in the database");
    for(int i=0;i<n;i++){
        printf("name=%s\t\tsid=%d\n",e[i].name,e[i].sid);
    }

}
void searchemp_name(E *e,char* name,int n){
      int flag=0;
     for(int i=0;i<n;i++){
      if(strcmp(e[i].name,name)==0){
        printf("employs is present in our compy ");
        flag=1;
        break;
      }        
    }
    if(flag==0){
        printf("emp is not present");
    }

   
    
    }
 int main(){
 E *e;
 char name[9]={"nagaraj"};
 int n;
 printf("enter the number of employ");
 scanf("%d",&n);
e=(E*)malloc(sizeof(E)*n);   
accept(e,n);
searchemp_name(e,name,n);
display(e,n);


 }   

