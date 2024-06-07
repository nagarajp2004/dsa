/*find the largest sub array with hte sum k*/
#include<iostream>
using namespace std;
int  main(){
  int a[5]={2,3,1,4,6};
  int k=6;
  int n=5;
  int maxi=0;
  int r=0,l=0;
  int sum=0;
     while(r<n){
        sum=sum+a[r];
        if(sum<=k){
            maxi=max(maxi,r-l+1);
            r++;
        }
        if(sum>k){
            sum=sum-a[l];
            l++;

        }
     }
     cout<<maxi;
}