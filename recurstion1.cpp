#include<iostream>
using namespace std;
void fn(int n){
    if(n==0){
     return;
    }
    if(n%2==0)
     cout<<n;
     fn(n-1);
}


int main(){
    fn(100);
}