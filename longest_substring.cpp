#include<iostream>
using namespace std;
//length of a longest substring
int main(){
    string s="abacwabacaz";
   int len=0;
   int maxlen=0;
    for(int i=0;i<s.size();i++){
          int hash[256]={0};
          for(int j=0;j<s.size();j++){
             if(hash[s[j]]==1){
               len=j-i;
               maxlen=max(maxlen,len);
               break;
             }
             hash[s[j]]++;
          }
    }
cout<<maxlen;
}