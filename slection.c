#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selection(int a[],int n){
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main(){
    int n;
    clock_t st,en;
    int a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a[i]=rand()%1000;
    }
    st=clock();
    selection(a,n);
    en=clock();
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    double cpu_time=((double)en-st)/CLOCKS_PER_SEC; 
    printf("%f",cpu_time);
}