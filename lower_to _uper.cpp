#include<iostream>
using namespace std;
void ltou(string &s,int n){
    if(n==-1){
        return;
    }
    s[n]='A'+s[n]-'a';
    ltou(s,n-1);
}

int main(){
  string s={"nagaraj"};
  int n=s.size();
  ltou(s,n-1);
  cout<<s;
}