#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int a[][3],int n,int c){
for(int i=0;i<n;i++){
    for(int j=0;j<c;j++){
        cout<<a[i][j]<<endl;
    }
}
}
void add(int a[][3],int b[][3],int c[][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
int row_index_max_sum(int a[][3]){
int max=0,sum;
for(int i=0;i<3;i++){
    sum=0;
    for(int j=0;j<3;j++){
       sum=sum+a[i][j]; 
    }
    if(max<sum){
       max=sum;
    }
}
return max;
}
void reverse(int a[3][3],int r=3,int c=3){
    for(int i=0;i<r;i++){
        for(int j=0;j<c/2;j++){
            swap(a[i][j],a[i][j+2]);
        }
    }
}
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    //int b[3][3]={1,2,4,5,6,7,8,9,5}; 
    int c;

    print(a,3,3);

}