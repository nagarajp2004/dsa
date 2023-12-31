#include<stdio.h>
typedef
struct emp{
    char name[40];
    int age;
}E;
void accept(E e[10],int n){
    for(int i=0;i<n;i++){
        printf("enter age and name");
        scanf("%d%s",&e[i].age,e[i].name);
    }
}
void display(E *e,int n){
    printf("enterd deatailed");
    for(int i=0;i<n;i++){
        printf("%d",e[i].age);
    }
}
int main(){
    E e[5];
    int n;
    scanf("%d",&n);
    accept(e,n);
    display(e,n);
}