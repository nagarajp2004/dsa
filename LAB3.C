#include<stdio.h>
#include<stdlib.h>
#define stack_size 3
void push(int s[stack_size],int* top){
    int ele;
    printf("enter the element\n");
    scanf("%d",&ele);
    if((*top)==stack_size-1){
        printf("overflow\n");
        return ;
    }
    (*top)++;
    s[*top]=ele;
}
void pop(int s[stack_size],int *top){
    int ele;
    if(*top==-1){
        printf("underflow\n");
        return;
    }
   ele=s[*top];
   (*top)--;
   printf("the deleted ele is%d",ele);
}
void display(int s[stack_size],int top){

if(top>-1)
for(int i=0;i<=(top);i++){
    printf("%d\n",s[i]);
}
else
printf("stack is empty\n");
}

void status(int s[stack_size],int top){
int used;
if(top==-1)
{
    used=0;
}
else
{
used=top+1;
}
printf("%d locations of the stack are used up\n", used);
printf("%d locations of the stack are free\n",stack_size- used);
}
//  void palindrom(int num){
//   int sp[stack_size];
//   int top=-1,rem;
//   int num1=num;
//   if(num1<pow(10,stack_size))
//   while(num1!=0){
//     rem=num1%10;
//     top++;
//     sp[top]=rem;
//     num1=num1/10;
//   }    




//  }
int main(){
    int s[stack_size],top=-1,ch;
   while(1){
    printf("1:push\n2:pop\n3:display\n4:status\n5:exit\n" );
    scanf("%d",&ch);
    switch(ch){
        case 1:
        push(s,&top);
        break;
        case 2:
        pop(s,&top);
        break;
        case 3:
        display(s,top);
        break;
        case 4:
        status(s,top);
        break;
        default:
        exit(0);

    }
   }
}