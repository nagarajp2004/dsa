#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define s_size 3
typedef 
struct emp
{
    char name[30];
    int eid;
}E;
void push(E s[s_size],int *top){
  E e1;
 printf("enter eid and name\n");
 scanf("%d%s",&e1.eid,e1.name);
 if((*top)+1==s_size){
    printf("overloaded");
    return;
 }
 (*top)++;
 s[*top].eid=e1.eid;
 strcpy(s[*top].name,e1.name);
}
void pop(E s[s_size],int *top){
E e1;
if((*top)==-1)
{
  printf("underflow\n");
  return;
}
e1.eid=s[*top].eid;
strcpy(e1.name,s[*top].name);
(*top)--;
}

void display(E s[s_size],int top){
  
if((top)>=0){
  for(int i=0;i<=top;i++){
  printf("%d::%s\n",s[top].eid,s[top].name);
  }}
  else{
    printf("stack is empty\n");
  }}

int main(){
E s[s_size];
int ch,top=-1;
while(1){
  printf("\nenter \n 1, to push\n 2.to pop\n 3.display \n4.exit ");
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
     default:
     exit(0);       
  }
}
}