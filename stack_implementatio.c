#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define max 3
void push(int s[max],int *top){
    int ele;
    printf("enter the ele\n");
    scanf("%d",&ele);
    if((*top)==max-1){
        printf("overflow\n");
        return;
    }
    (*top)++;
    s[*top]=ele;
}
void pop(int s[max],int *top)
{
int ele;
if((*top)==-1){
    printf("underflow\n");
    return;
}
ele=s[*top];
(*top)--;
printf("deleted elemented is %d",ele);
}
int is_palindrom(char str[]){
   int i,top=-1;
   char s[20],s_item;
   for(i=0;i<strlen(str);i++){
        s[++top]=str[i];
   }
   for(i=0;i<strlen(str);i++){
    s_item=s[top--];
    if(str[i]!=s_item){
        return 0;
    } 
   }
   return 1;
}
void status(int s[max],int top){
    if(top==-1){
        printf("the stack is empty\n");
    }
    else{
        printf("%d number of ele used in the stack \n",top+1);
        printf("%d number of empty ",max-(top+1));
    }
}
void display(int s[max],int top){
    if(top==-1){
        printf("the stack is empty\n");
        return;
    }
    for(int i=0;i<=top;i++){
       printf("%d\n",s[i]);
    }

}
int main(){
    int s[max],top=-1,ch,flag=0;
    char str[20];
    while(1){
        printf("1:push\n2:pop\n3:status\n4:dispaly\n5:check_plaindrom\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
              push(s,&top);
              break;
            case 2:
              pop(s,&top);
              break;
            case 3:
              status(s,top);
              break;
            case 4:
              display(s,top);
              break;
            case 5: 
                printf("enter the string \n");
                scanf("%s",str); 
                flag =is_palindrom(str);
                if(flag==1){
                    printf("it is  palindrom\n");
                } 
                else{
                    printf("not palindrom\n");
                }
                break;
            default:
               exit(0);   
        }
    }
}

