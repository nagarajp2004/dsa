#include<iostream>
using namespace std;
void print(int n,int m){
  if(m==10){
    cout<<n*m;
    return;
  }
  cout<<n*m<<endl;
  print(n,m+1);

   
}

int main(){
    
print(13,0);
}