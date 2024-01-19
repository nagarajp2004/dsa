#include<iostream>
using namespace std;
void sortacending(int* a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void sortdecenduing(int* a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void display(int *a,int n){
    for(int i=0;i<n;i++){
        cout << a[i];
    }
}
int main(){
    int a[10]={1,2,3,4,5,6};
    sortacending(a,6);
    display(a,6);
    sortdecenduing(a,6);
    display(a,6);
}