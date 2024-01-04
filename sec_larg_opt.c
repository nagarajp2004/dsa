#include<stdio.h>
#include<stdlib.h>
void accept(int a[],int n){
    printf("enter tge elements");
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void sec_lar(int a[],int n){
    int lar=a[0],sec=-1;
    for(int i=0;i<n;i++){
         if(lar <a[i]){
            sec=lar;
            lar=a[i];
         }
         if(sec <a[i] && lar!=a[i]){
            sec =a[i];
         }
    }
printf("%d is lar \n %d is sec lar",lar,sec);
}
int main(){
int n;
    printf("entert tghe number of element in array");
    scanf("%d",&n);
    int *p;
    p=(int*) malloc(n*sizeof(int));
    accept(p,n);
    sec_lar(p,n);
}