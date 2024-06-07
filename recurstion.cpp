 #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int recur(vector<int>x,int a){
   if(a==-1){
    return 0 ;
   }
   return x[a]+recur(x,a-1);
  }

  int main(){
vector<int>x={1,2,3,4,5,0};
cout<<recur(x,5);

 

  }