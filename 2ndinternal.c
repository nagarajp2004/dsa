#include<stdlib.h>
#include<stdio.h>
#define stack_size 3
void push(int s[stack_size],int *top){
    int ele;
    printf("enter the element\n");
    scanf("%d",&ele);
    if(*top==stack_size-1){
        printf("overflowe");
        return;
    }
    (*top)++;
    s[*top]=ele;
}
void display_s(int s[stack_size],int top){
    if(top==-1){
        printf("the stack is empty");
        return;
    }
    for(int i=0;i<=top;i++){
        printf("%d\t",s[i]);
    }
}
void pop(int s[stack_size],int *top){
    if(*top==-1){
        printf("underflow");
        return;
    }
   printf("the deletd ele  is%d",s[*top]);
    (*top)--;
}

int main(){
int s[stack_size],top=-1;
 int ch;
 while(1){
    printf("1,push\n 2 top pop\n 3 to diaply\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        push(s,&top);
        break;
        case 2:
        pop(s,&top);
        break;
        case 3:
        display_s(s,top);
        break;
        case 4:
        exit(0);
    }
 
 }
}