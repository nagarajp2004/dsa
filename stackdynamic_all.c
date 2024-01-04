#include<stdlib.h>
#include<stdio.h>
int* push(int *s ,int *top ,int *s_size)
{
int ele;
printf("enter the element");
scanf("%d",&ele);
if(*top==(*s_size)-1)
{
(*s_size)=(*s_size)*2;
s=(int*) realloc (s,sizeof(int)*(*s_size));
}
(*top)++;
s[*top]=ele;
return s;
}
void pop(int *s,int *top){
    int ele;
    if(*top==-1){
        printf("the stack is empty");
        
        return;
    }
    ele=s[*top];
    printf("the deleted is %d",ele);
    (*top)--;
}
void display(int* s,int *top){
    for(int i=0;i<=(*top);i++){
        printf("the value of stack is %d\t",s[i]);
    }
}
int main(){
    int *s,s_size=3,top=-1;
    int ch;
s=(int*) malloc(sizeof(int)*(s_size));
    while(1){
        printf("1.push \n 2.pop\n 3.del \n 4.to exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
             s=push(s,&top,&s_size);
             break;
            case 2:
             pop(s,&top);
             break;
            case 3:
             display(s,&top);
             break; 
            default:
             exit(0); 
        }
    }
}