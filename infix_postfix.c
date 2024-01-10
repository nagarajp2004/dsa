#include<stdio.h>
#define max 10
int F(char s){
switch(s){
    case '+':
    case '-':
    return 2;
    case '*':
    case '/':
    case  '%':
    return 4;
    case '^':
    case '$':
    return 5;
    case '(':
    return 0;
    default :
    return 8;
}}
int G( char s){
  switch(s){
    case '+':
    case '-':
    return 1;
    case '*':
    case '/':
    case '%':
    return 3;
    case '^':
    case '$':
    return 6;
    case '(':
    return 9;
    case ')':
    return 0;
    default :
    return 7;
  }
}








void push(char s[max],int *top,char symbol){
   if(*top==max-1){
    printf("under flow");
    return ;
   } 
    printf("good 1");
    (*top)++;
    s[*top]=symbol;
}
char pop(char s[max],int *top){
    char symbol;
    symbol=s[*top];
    (*top)--;
    printf("good2");
    return symbol;
}
void infix_postfix(char infix[max]){
    char postfix[20], s[max],symbol;
    int i,j=0,top=-1;
    push(s,&top,'#');
    for(i=0;infix[i]!='\0';i++)
 { 
    symbol=infix[i];
      while(F(s[top])>G(symbol)){
              postfix[j]=pop(s,&top);
              
         j++;
    }
    if(F(s[top])!=G(symbol)){
        push(s,&top,symbol);
       printf("good3");
    }   
    else
        top--;
}
while(s[top]!='#'){
    postfix[j]=pop(s,&top);
    j++;
    printf("good4");
}
postfix[j]='\0';
printf("%s",postfix);
      
}

int main() {
    char infix[max];

    printf("Enter the infix expression: ");
    scanf("%s", infix);

    infix_postfix(infix);

    return 0;
}
