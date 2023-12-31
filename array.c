#include<stdio.h>
#include<stdlib.h>
void accept(int a[10],int n){
    printf("enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }    }
void display(int a[20],int n){
    printf("entered elements are");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
void add_2_array(int *a,int *b,int *c,int n){
    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
    }
}
// void concat(int *a,int *b,int n){
//      int j=0; 
//      int m=(2*n) ;
//     for(int i=n;i<m;i++){
//      a[i]=b[j];
     
    
//     j++;
//     }
    void concat(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        a[n + i] = b[i];
    }
}
void delete(int *a,int n){
    printf("enter the index to delete");
    int ind;
    scanf("%d",&ind);
    for(int i=ind;i<n-1;i++){
      a[i]=a[i+1];

    }
}
void insert(int *a,int n){
    int i;
    printf("enter the elsement and index to insweet");
    int index,ele;
    scanf("%d%d",&ele,&index);
    for( i=n;i>index;i++){
        a[i]=a[i-1];

    }
    a[i]=ele;
}



    
    

int main(){
int *a,c[20],b[20];
int n;

printf("enter the lentg");
scanf("%d",&n);
a=(int*)malloc((n*2)*sizeof(int));
accept(a,n);
//accept(b,n);

//add_2_array(a,b,c,n);
//concat(a,b,n);

//delete(a,n);
insert(a,n);
display(a,n+1);

}