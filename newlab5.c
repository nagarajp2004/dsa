#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define max 10
int compute(int op1,char sym,int op2)
{
    switch(sym){
        case'+':
        return op1+op2;
        case '-':
        return op1-op2;
        case '*':
        return op1*op2;
        case '/':
        return op1/op2;
        case '%':
        return op1%op2;
        case'^':
        return pow(op1,op2);

    }
}
void push(int s[max],int*top,int sym){
    (*top)++;
    s[*top]=sym;
}

int pop(int s[max],int* top){
    int sym;
    sym=s[(*top)--];
    return sym;
}


int main(){
    int s[max],top=-1,res,op1,op2,i=0;
    char post[20],symbol;
    scanf("%s",post);
    for(;post[i]!='\0';i++){
        symbol=post[i];
        if(isdigit(symbol)){
            push(s,&top,symbol-'0');
        }else{
            op2=pop(s,&top);
            op1=pop(s,&top);
            res=compute(op1,symbol,op2);
            push(s,&top,res);
        }
    }
    printf("%d",pop(s,&top));
}