
#include<stdio.h>
#define max 4
int G(char symbol){
    switch(symbol){
        case'+':
        case '-':
         
         return 1;
      
        case '*':
        case '%':
        case '/':
        return 3;
       
        case '^':
        case '$':
        return 6;
     
        case '(':
        return 9;
     
        case ')':
        return 0;
     
        default:
        return 7;
    }
}
int F(char symbol){
    switch(symbol){
        case'+':
        case'-':
        return 2;
        case'*':
        case'/':
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
void push(char s[max],int*top,char symbol){
(*top)++;
s[*top]=symbol;
}
char pop(char s[max],int *top){
    char symbol;
    symbol=s[*top];
    (*top)--;
    return symbol;
}
void convert_infix_postfix(char infix[100]){
    char s[max],post[100],symbol;
    int j=0,i=0,top=-1;
    push(s,&top,'#');
    for(i=0;infix[i]!='\0';i++){
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
    char infix[100];
    printf("enter the infix expresstion");
    scanf("%s",infix);
    convert_infix_postfix(infix);
}