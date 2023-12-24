#include<stdio.h>
int main(){
    int f,s,c,n;
    printf("enter the number number");
    scanf("%d",&n);
    f=0;
    s=1;
    printf("01");
    while((n-2)!=0){
        c=f+s;
        printf("%d",c);
        f=s;
        s=c;
        n--;
    }
}