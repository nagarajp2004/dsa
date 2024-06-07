#include <bits\stdc++.h>
#include<iostream>
using namespace std;

void merge(long long a1[], long long a2[], int n, int m) {
 int h=n-1;
 int l=0;
 int i=0;
 while(i<m){
    if(a1[h]>a2[l]){
        swap(a1[h],a2[l]);
        l++;
        h--;
    }
    else{
      break;
    }
    i++;
 }

sort(a1,a1+n);
sort(a2,a2+m);
//  for(int i=0;i<n;i++){
//   cout<<a1[i];
//  }
 for(int i=0;i<m;i++){
  cout<<a2[i];
 }
}
int main(){
  long long arr1[] = {1, 4, 8,34};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    
}