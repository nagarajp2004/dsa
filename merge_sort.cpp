#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void merge_ele(vector<int>&a ,int l,int m,int h)
{
    vector<int>temp;
    int left=l;
    int right=m+1;
    while(left<=m &&right<=h){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }

    }

    while(left<=m){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=h){
        temp.push_back(a[right]);
        right++;
    }
 for(int i=l;i<=h;i++){
    a[i]=temp[i-l];
 }

}
void merge_sort(vector<int>&a,int l,int h)
{
     if(l>=h){
        return;
     }
     int mid=(l+h)/2;
     merge_sort(a,l,mid);
     merge_sort(a,mid+1,h);
     merge_ele(a,l,mid,h);
}



int main(){
vector<int>x={3,1,2,4,1};
int h=x.size()-1;
int l=0;
 merge_sort(x,l,h);
for(auto i:x){
    cout<<i;
}
}