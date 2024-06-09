#include<iostream>
using namespace std;
#include<vector>
bool binsearch(vector<int>x,int low,int hi,int t){
    int mid=(low+hi)/2;
    if(hi<low){
        return 0;
    } 


    if(x[mid]==t){
        return 1;
    }
    if(x[mid]>t){
        return binsearch(x,low,mid-1,t); 
    }
    else{
        return binsearch(x,mid+1,hi,t);
    }

}
int main(){
    vector<int>x={1,2,3,4,5,6,7,8};
    int n=x.size()-1;
    cout<<binsearch(x,0,n,6);

}