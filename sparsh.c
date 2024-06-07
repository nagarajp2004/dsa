#include<stdio.h>
struct sparsh{
    int row,colum,value;
};
typedef struct sparsh s;
 void accept_sp(s a[10],int n ,int m){
    int i,j,k=1,v;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&v);
            if(v!=0){
              a[k].row=i;
              a[k].colum=j;
              a[k].value=v;
              k++;
            }                   
        }
    }
    a[0].row=n;
    a[0].colum=m;
    a[0].value=k-1;

 }
 void display(s a[10],int n,int m){
    int k=1;
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[k].row==i && a[k].colum==j){
                printf("%d\t",a[k].value);
                k++;
                
            }
            else{
                printf("0\t");
            }
        }
        printf("\n");
    }
 }
 void transpose(s a[10],s b[10]){
  int n=a[0].row,m=a[0].value,k=1;
  int x=1;
  for(int i=0;i<n;i++){
    for(int j=1;j<=m;j++){
        if(i==a[j].colum){
         b[k].row=a[j].colum;
         b[k].colum=a[j].row;
         b[k].value=a[j].value;   
        k++;
        }
    }
  }
  b[0].row=m;
  b[0].colum=n;
  b[0].value=a[0].value;
 }

 int main(){
    s a[10],b[10];
    printf("enter the matrix");
    accept_sp(a,3,3);
   transpose(a,b);
    display(a,3,3);
    printf("\n");
      display(b,3,3);
 }