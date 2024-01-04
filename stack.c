#include<stdio.h>
#include<stdlib.h>
#define s_size 3
void push(int s[s_size],int *top){
    int ele;
    printf("enter the element");
    scanf("%d",&ele);
    if((*top)+1==s_size){
        printf("overflow as occured");
        return;
    }
    (*top)++;
    s[*top]=ele;
}
void pop(int s[s_size],int *top){
    int ele;
    if((*top)==-1){
        printf("underflow");
        return;
    }
    ele=s[*top];
    (*top)--;
    printf("the deleted  numvber is %d",ele);
        
}
void display(int s[s_size],int top){
    if(top<0){
        printf("the stack is empty");
    }
    
    for(int i=0;i<=top;i++){
        printf("%d\n",s[i]);
    }
}
int main(){
    int s[s_size];
    int top=-1;
    int ch;
    while(1){
        printf("enter 1. push \n 2. pop \n 3.display \n 4.exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
              push(s,&top);
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