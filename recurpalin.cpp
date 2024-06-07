#include<string>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool recpal(string s,int str,int end){
    if(str>=end){
        return true;
    }
    if(s[str]!=s[end]){
        return false;
    }
    return recpal(s,str+1,end-1);

}

int main(){

string s={"nan"};
cout<<recpal(s,0,s.size()-1);
}