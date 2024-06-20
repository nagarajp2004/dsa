#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool jumpgame(vector<int>& x,int n)
{
 int maxi=0;
 for(int i=0;i<n;i++){
    if(i<=maxi){
       maxi=max(maxi,i+x[i]);
    }
 }
 if(maxi>=n){
    return true;
 }
 
 return false;
}
int main(){
    vector<int>x={2,3,1,0,4};
    int n=x.size()-1;
    cout<<jumpgame(x,n);
}