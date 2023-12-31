#include<stdio.h>
typedef
struct sparse{
    int row;
    int col;
    int value;
}S;
void accept(S *a,int n,int m){
    int i,j,k=1;
    int ele;

    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
       printf("enter teg elements");
       scanf("%d",&ele);
       if(ele!=0){
        a[k].row=i;
        a[k].col=j;
        a[k].value=ele;
        k++;
       }
       }
    }
    a[0].row=n;
    a[0].col=m;
    a[0].value=k-1;

     }
void display(S s[10]){
int i,j,n=s[0].row,m=s[0].col,k=1;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(s[k].row==i && s[k].col==j &&k<=s[0].value){
            printf("%d",s[k].value);
             k++;
        }
        else{
            printf("0");
        }}
         printf("\n");
    }
}
void transpose(S a[10],S b[10]){
    int k=1;
    for(int i=0;i<a[0].col;i++){
        for(int j=1;j<=a[0].value;j++){
               if(i==a[j].col){
                  b[k].row=i;
                  b[k].col=a[j].row;
                  b[k].value=a[j].value;
                  k++;
               }  


        }
    }
    b[0].row=a[0].col;
    b[0].col=a[0].row;
    b[0].value=a[0].value;

}












int main(){     
S s[20],s2[10];
printf("enter the number of row ND COL");
int row,col;
scanf("%d%d",&row,&col);
accept(s,row,col);
transpose(s,s2);
display(s);
display(s2);

}