#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void merge(int *a,int l,int m,int h){
    int n=h-l+1;
    int c[n];
    int i=l;
    int j=m+1;
    int index=0;
    while(i<=m && j<=h){
         if(a[i]<a[j]){
            c[index++]=a[i++];
         }
         else{
            c[index++]=a[j++]; 
         }
    }

    while(i<=m){
        c[index++]=a[i++];
    }
    while(j<=h){
        c[index++]=a[j++];
    }
    for(int k=l;k<=h;k++){
        a[k]=c[k-l];
    }
}
void merge_sort(int* a,int l,int h){
    if(l>=h){
        return;
    }
    int mid=(l+h)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,h);
    merge(a,l,mid,h);

}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%1000;
    }
    clock_t st=clock();
    merge_sort(a,0,n-1);
    clock_t e=clock();
    double time_taken=((float)e-st)/CLOCKS_PER_SEC;
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("%f",time_taken);
}