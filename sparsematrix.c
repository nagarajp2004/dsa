#include<stdio.h>
typedef struct sparse{
int row;
int column;
int value;
}S;
void accept(S a[10],int n,int m){
    int i,j,k=1,ele;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter the ele of sparse matrix");
            scanf("%d",&ele);
            if(ele!=0){
                a[k].row=i;
                a[k].column=j;
                a[k].value=ele;
                k++;
            }


        }
    }
    a[0].row=n;
    a[0].column=m;
    a[0].value=k-1;

}
void display(S a[10]) {
    int i,j,k=1;
    for(i=0;i<a[0].row;i++){
        for(j=0;j<a[0].column;j++){
           if(i==a[k].row &&j==a[k].column){
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
 void transpose(S a[10],S b[10]){
    int k=1;
    for(int i=0;i<a[0].column;i++){
        for(int j=1;j<=a[0].value;j++){
         
        }
    }
 }   
    


int main(){
    S a[10];
    int n,m;
    printf("enter the number rows and column");
    scanf("%d%d",&n,&m);
    accept(a,n,m);
    display(a);
    return 0;
}