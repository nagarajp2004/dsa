#include<stdio.h>
void tower_hanoi(int n,char s,char t,char d){
    if(n==0) 
    return;
    tower_hanoi(n-1,s,d,t);
    printf("%d is moved from %c to %c",n,s,t);
    tower_hanoi(n-1,t,s,d);
}
int main(){
    tower_hanoi(3,'A','b','c');
}