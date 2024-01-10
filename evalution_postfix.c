#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define max 4
int compute(int op1,char op,int op2){
    switch(op){
        case '+':
        return op1+op2;
        case '-':
        return op1-op2;
        case '*':
        return op1*op2;
        case '/':
        return op1/op2;
        case '%':
        return op1%op2;
        case '^':
      
         return pow(op1,op2);
         

    }
}

void push(int s[max],int *top,int val){
    if(*top==max-1){
        printf("overflow");
    }
   (*top)++;
   s[*top]=val;

}
int pop(int s[max],int *top){
    int val;
    if(*top==-1){
        printf("underflow");
    }
    val=s[*top];
    (*top)--;
    return val;
}

int main(){
    char postfix[max],symbol;
    int s[max],result,op1,op2,top=-1;
    printf("enter the postfix experstio\n");
    scanf("%s",postfix);
    int i=0;
    while(postfix[i]!='\0'){
        symbol=postfix[i];
      if(isdigit(symbol)){
           push(s,&top,symbol-'0');
      }
      else{
        op2=pop(s,&top);
        op1=pop(s,&top);
        result=compute(op1,symbol,op2);
        push(s,&top,result);
      }
  i++;
    }
printf("%d",pop(s,&top));

}