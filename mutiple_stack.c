#include<stdio.h>
#define max_size 12
#define no_of_stack 3;
void push(int s[],int top[],int bound[],int i){
    int ele;
    printf("enter the element");
    scanf("%d",&ele);
    if(top[i]==bound[i+1]){
        printf("overflow");
        return ;
    }
    top[i]++;
    s[top[i]]=ele;
}
void pop(int s[],int top[],int bound[],int i)
{
  int ele;
  if(top[i]==bound[i]){
    printf("underflow");
    return;
  }
