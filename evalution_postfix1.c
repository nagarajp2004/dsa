
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define max_size 10
int compute(int op1,char c,int op2)
{
    switch(c){
        case '+':
        return(op1+op2);
        case'-':
        return (op1-op2);
        case '*':
         return (op1*op2);
        case '/':
        return (op1/op2);
         case '%':
        return (op1%op2);
        case '$':
        case '^':
        return(pow(op1,op2));
       
        
    }
}
void push(int s[max_size],int*top,int ele){
    (*top)++;
    s[*top]=ele;
}
int pop(int s[max_size],int*top){
    int ele;
    ele=s[*top];
    (*top)--;
    return ele;
}

int main(){
    int s[max_size],top=-1,result,op1,op2;
    char postfix[10],symbol;
    int i;
    printf("enter the postfx expresstion");
    scanf("%s",postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
      symbol=postfix[i];
       if(isdigit(symbol))
        {
         push(s,&top,symbol-'0');
        }         
       else
       {
         op2=pop(s,&top);
         op1=pop(s,&top);
         result=compute(op1,symbol,op2);
         push(s,&top,result);
       } 

    } 
    printf("result is %d",pop(s,&top));
}


