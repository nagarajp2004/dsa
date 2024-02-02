#include<iostream>
#include<vector>
using namespace std;

#include<vector>
class Solution{   
public:
  
    bool isProduct(int b[], int n, long long x) {
     int e=n-1;
     int s=0;
     vector<int>a;
     for(int i=0;i<n;i++){
         if(b[i]<0){
             b[i]*=-1;
         }
         a.push_back(b[i]);
     }
    
     while(s!=n){
         if(a[e]*a[s]==x){
             return 1;
         }
         else if(a[e]*a[s]>x){
             e--;
         }
         else{
             s++;
         }
         
        
     }

     return 0;
     
     
    }
};
int main(){
Solution x;   
int  a[20]={2,3,-33,66,88,99};
int n=6;
int s=132;
cout<<x.isProduct(a,n,s);
}