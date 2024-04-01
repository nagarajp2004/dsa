#include<stdio.h>
#include<stdlib.h>
void hanoi(int n,char s,char t,char d){
    if(n==0)
    return;
    hanoi(n-1,s,d,t);
    printf("move the disk %d from %c to%c\n",n,s,d);
    hanoi(n-1,t,s,d);
}
int main (){
    int n;
    printf("etnr the number of disk\n");
    scanf("%d",&n);
    hanoi(n,'A','B','c');

}