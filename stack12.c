#include<stdio.h>
#include<stdlib.h>
int max=3;
int* push(int *s,int *top){
    int ele;
    printf("etnr the ele\n");
    scanf("%d",&ele);
    if(*top==max-1){
      max=max*2;
      s=(int*)realloc(s,max*sizeof(int));
    }
    s[++(*top)]=ele; 
    return s;      
}
void pop(int *s,int *top){
    int ele;
    if(*top==-1){
        printf("under flow\n");
        return;////////////////////////////////imp//////////////////////
    }
    printf("the deleted ele is %d",s[*top]);
    (*top)--;
}
 void display(int *s,int top){
    for(int i=0;i<=top;i++){
        printf("%d",s[i]);
    }
 }
 int main(){
    int *s;
    s=(int*)malloc(max*sizeof(int));
    int top=-1,ch;
    printf("etnr 1 to push 2 to pop 3 to delet\n");
    while(1){
      scanf("%d",&ch);
      switch(ch){
        case 1:
        s=push(s,&top);
         break;
        case 2: 
        pop(s,&top);
        break;
       case 3:
       display(s,top);  
      }
    }

 }

