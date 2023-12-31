#include<stdio.h>
#include<stdlib.h>
void accept(int a[],int n){
    printf("enter tge elements");
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int sortlarg(int a[],int n){
    for(int i=0;i<n-1;i++){
     for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            int temp;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
     }
    }
    return a[n-1];
}
 int largeopti(int a[],int n){
    int larg=a[0];
    for(int i=1;i<n;i++){
        if(larg<a[i]){
            larg=a[i];
        }

    }
    return larg;
 }
int main(){
    int n;
    printf("entert tghe number of element in array");
    scanf("%d",&n);
    int *p;
    p=(int*) malloc(n*sizeof(int));
    accept(p,n);
    printf(" the largest by sorting is%d\n",sortlarg(p,n));
    printf("%d by optimal solution",largeopti(p,n));



}