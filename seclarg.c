#include<stdio.h>
#include<stdlib.h>
void accept(int a[],int n){
    printf("enter tge elements");
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
}


 int seclar(int a[],int n){
    int larg=a[0];
    int sec=a[0];
    for(int i=1;i<n;i++){
        if(larg<a[i]){
            larg=a[i];
        }
       }
printf(" the large %d\n",larg);
  for(int i=0;i<n;i++){
      if(a[i]!=larg){
         if(sec < a[i]){
             sec=a[i];
         }
      }
   }
 return sec; 
 }
int secsma(int a[],int n){
    int smallest=a[0];
    int secsmallest=a[0];
    for (int i=i;i<n;i++){
        if(smallest > a[i]){
            smallest=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=smallest){
            if(a[i]< secsmallest){
                secsmallest=a[i];
            }
        }
    }
printf("smallest =%d\n",smallest);
printf("sec smallest=%d",secsmallest);
}

int main(){
    int n;
    printf("entert tghe number of element in array");
    scanf("%d",&n);
    int *p;
    p=(int*) malloc(n*sizeof(int));
    accept(p,n);
    
   secsma(p,n);



}