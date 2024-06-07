#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void rev(char* s,int st,int e){
    if(e<=st){
         return;
    }
    swap(s[st],s[e]);
    return rev(s,st+1,e-1);

}
int main(){
    char s[20]={"nagaraj"};
   
    int n=7;
    int str=0;
    rev(s,str,n-1);
    cout<<s;
}