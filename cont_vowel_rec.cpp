#include<iostream>
using namespace std;
int cvo(string a,int n){
    if(n==0){
        return 0;
    }
  if(a[n-1]=='a' || a[n-1]=='e' || a[n-1]=='i' || a[n-1]=='o' ||a[n-1]=='u' )
 {
    return 1+cvo(a,n-1);
 }
 else{
    return cvo(a,n-1);
 }
}
int main(){
    string s={"nagiraj"};
    int n=s.size();
    cout<<cvo(s,n);
}