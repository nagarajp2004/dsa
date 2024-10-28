#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int partion(int a[],int l,int h){
    int key=a[l];
    int i=l;
    int j=h+1;
    while(i<j){
        do{
            i++;
        }while(a[i]<=key && i<=h);

        do{
            j--;
        }while(a[j]>key && j>l);

        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[j];
    a[j]=a[l];
    a[l]=temp;
    return j;
}
void qs(int a[],int l,int h){
    
    if(l>=h){
        return ;
    }
    int j=partion(a,l,h);
    qs(a,l,j-1);
    qs(a,j+1,h);
}
int main(){
int n=10;
int a[10]={4,2,5,12,8,2,78,2,1,6};

qs(a,0,n-1);
for(int i=0;i<10;i++){
 printf("%d\n",a[i]);
}

}
