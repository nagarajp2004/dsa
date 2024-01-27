#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 3
int compute(int op1,char c,int op2){
    switch(c){
        case '+':
        return op1+op2;
        case '-':
        return op1-op2;
        case '*':
        return op1*op2;
       case '^':
       case'$':
       return (pow(op1,op2));
       case '%':
       return op1%op2;
       default:
         exit(0);
    
    }
}

void push( int s[max],int *top,int ele ){
    (*top)++;
    s[*top]=ele;
}
int pop(int s[max],int*top){
    int ele;
    ele=s[*top];
    (*top)--;
    return ele;
}
int main(){
    char post[100],symbol;
    int op1,op2,result,top=-1;
    int s[max];
    printf("enter  the postfixm \n");
    scanf("%s",post);
    for(int i=0;post[i]!='\0';i++){
        symbol=post[i];
        if(isdigit(symbol)){
            push(s,&top,symbol-'0');
        }
        else{
                 op2=pop(s,&top);
                 op1=pop(s,&top);
                 result=compute(op1,symbol,op2);
                 push(s,&top,result);
        }
    }

 printf("THE ANS =%d",pop(s,&top));
}


