#include<iostream>
using namespace std;
int large(int& a,int& b,int& c){
    if(a>b && a>c){
        return a;
    }
    if(c>a && c>b){
        return c;
    }
    if(b>a && b>c){
        return b;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<< large(a,b,c);
}