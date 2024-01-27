#include<stdio.h>
#include<stdlib.h>
int* push(int* s,int* top,int* MS){
int ele;
printf("enter the ele");
scanf("%d",&ele);
if((*top)==(*MS)-1){
   (*MS)=(*MS)*2;
   printf("mem is extanded\n");
   s=(int*)realloc(s,sizeof(int)*(*MS));
  }
(*top)++;
s[*top]=ele;
return s;
}

void pop(int* s,int *top){
    int ele;
    if(*top==-1){
        printf("under flow");
    }
     ele=s[*top];
     (*top)--;  
     printf("the deleted ele is%d",ele);
}
void display(int*s,int top){
   if(top==-1){
    printf("the stack is empty");
   }
   for(int i=0;i<=top;i++){
    printf("%d\n",s[i]);
   }
} 

int main(){
    int *s,top=-1,max=3;
    s=(int*)malloc(sizeof(int)*max);
    int ch;
    while(1){
        printf("enter 1 to push \n2 to pop \n3 display \n");
        scanf("%d",&ch);
        switch(ch){
             case 1:
             s=push(s,&top,&max);
             break;
             case 2:
             pop(s,&top);
             break;
             case 3:
             display(s,top);
             break;
             default:
             exit(0); 
        }
    }
}