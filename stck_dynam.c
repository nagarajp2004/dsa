#include<stdlib.h>
#include<stdio.h>
int* push(int *s,int *top,int* max){
    int ele;
    printf("ENTER THE ELEE\n");
    scanf("%d",&ele);
    if((*top)==(*max)-1){
        printf("memeory is dounled\n");
        (*max)=(*max)*2;
        s=(int*)realloc(s,sizeof(int)*(*max));
    }
    (*top)++;
    s[*top]=ele;
    return s;
}
int main(){
    int *s;
    int max=3,top=-1;
    s=(int*)malloc(sizeof(int)*max);
    s=push(s,&top,&max);
    s=push(s,&top,&max);
    s=push(s,&top,&max);
    s=push(s,&top,&max);
    s=push(s,&top,&max);
}