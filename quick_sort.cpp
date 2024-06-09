#include<iostream>
using namespace std;
#include<vector>

int partition(vector<int>&x ,int l,int h){
 int pi=x[h];
 int pos=l;
 int i=l;
 while(i<=h){
    if( x[i]<=pi){
        swap(x[pos],x[i]);
        pos++;
        i++;
       
    }
    else{
        i++;
    }
 }

return pos-1;
}

void quick_sort(vector<int>&x,int l,int h){
 if(l>=h){
    return;
 }
 int pi;
 pi=partition(x,l,h);
 quick_sort(x,l,pi-1);
 quick_sort(x,pi+1,h);

}

int main(){
vector<int>x={23,2,5,9,2,1,6};
int l=0;
int h=x.size()-1;

quick_sort(x,l,h);
for(auto i:x){
    cout<<i<<endl;
}

}