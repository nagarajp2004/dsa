#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selection(int* a,int n){
    int mpos,i=0,j=0;

    for(i=0;i<n-1;i++){
        mpos=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[mpos]){
                mpos=j;
            }
         }
      int temp=a[j];
      a[j]=a[i];
      a[i]=temp;
    }
}

void randgen(int* a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%1000;
    }
}
 int main(){
    int *a,n;
    printf("enter the size of arr");
    scanf("%d",&n);

 a=(int*)malloc(n*sizeof(int));
 randgen(a,n);
 clock_t start=clock();
 selection(a,n);
 clock_t end=clock();

double time_taken=(double)(end-start)/CLOCKS_PER_SEC;
printf("the time is %f",time_taken);

 }