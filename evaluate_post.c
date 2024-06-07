#include<stdio.h>
# include<math.h>
#include<ctype.h>
int compute(int op1,char symbol,int op2){
    switch(symbol){
        case '+':
            return op1+op2;
        case '-':
            return op1-op2;
        case '/':
             return op1/op2;
        case '*':
          return op1*op2;
        case '%':
             return op1%op2;
        case '$':
        case '^':
             return pow(op1,op2);                            
         
      }
}
void push(int s[10],int* top,int symbol){
     (*top)++;
    s[*top]=symbol;
}
int pop(int s[10],int *top){
    int ele;
    ele=s[*top];
    (*top)--;
    return ele;
}

int main()
{
char postfix[20],symbol;
printf("etnr the postfix\n");
scanf("%s",postfix);
int s[10],op1,op2,res,top=-1;
for(int i=0;postfix[i]!='\0';i++){
    symbol=postfix[i];
    if(isdigit(symbol)){
      push(s,&top,symbol-'0');
    }
    else{
        op2=pop(s,&top);
        op1=pop(s,&top);
        res=compute(op1,symbol,op2);
        push(s,&top,res);  
    }
}
printf("the ans=%d",pop(s,&top));


}