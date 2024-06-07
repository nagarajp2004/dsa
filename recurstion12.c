#include<stdio.h>
void tower_hanoi(int n,char s,char t,char d){
    if(n==0){
        return ;
    }
    tower_hanoi(n-1,s,d,t);
    printf("disk %d moved from %c to %c",n,s,d);
    tower_hanoi(n-1,t,s,d);
}
int fac(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}

int main(){
   printf("%d",fac(3));
}