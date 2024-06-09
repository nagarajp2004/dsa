#include<iostream>
using namespace std;
#include<vector>
bool ls(vector<int>x,int ind,int k){
    if(x[ind]==k){
        return 1;
    }
    if(ind==-1){
        return 0;
    }
    return ls(x,ind-1,k);
}

int main(){
    vector<int>x={2,34,5,1,6,3};
   cout<<ls(x,5,0067);
}