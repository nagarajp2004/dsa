#include<stdio.h>
#include<stdlib.h>
#define max 4
int G(char s){
    switch(s){
        case '+':
        case'-':
        return 1;
        case '%':
        case'*':
        case'/':
        return 3;
        case '^':
        case'$':
        return 6;
        case'(':
        return 9;
        case ')':
        return 0;
        default:
        return 7;
    }
}
int F(char s){
    switch(s){
        case '+':
        case'-':
        return 2;
        case '*':
        case'/':
        case'%':
        return 4;
        case'^':
        case'$':
        return 5;
        case'(':
        return 0;
        case'#':
        return -1;
        default:
        return 8;
    }
}

void push(char s[max],int *top,char sym){
    (*top)++;
    s[*top]=sym;
}

char pop(char s[max],int* top){
    char sym;
    sym=s[*top];
    (*top)--;
   return sym;
}

void conver_infi_post(char infix[]){
    char post[20],s[max],symbol;
    int top=-1,i=0,j=0;
    push(s,&top,'#');
    for(;infix[i]!='\0';i++){
        symbol=infix[i];
      while(F(s[top])>G(symbol)){
        post[j++]=pop(s,&top);
      }
      if(F(s[top])!=G(symbol)){
        push(s,&top,symbol);
      }
      else
       top--;
    }
    while(s[top]!='#'){
        post[j++]=pop(s,&top);
    }
    post[j]='\0';
printf("%s",post);
}
int main(){
    char infix[20];
    printf("etner the infix");
    scanf("%s",infix);
    conver_infi_post(infix);
}