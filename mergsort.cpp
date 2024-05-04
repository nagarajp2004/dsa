#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a, int w, int x, int y, int z) {
    vector<int> temp;
    int i = w, j = y;
    while (i <= x && j <= z) {
        if (a[i] < a[j]) {
            temp.push_back(a[i]);
            i++;
        } else {
            temp.push_back(a[j]);
            j++;
        }
    }
    while (i <= x) {
        temp.push_back(a[i]);
        i++;
    }
    while (j <= z) {
        temp.push_back(a[j]);
        j++;
    }
    for (int k = w; k <= z; k++) {
        a[k] = temp[k - w];  // Adjust the index for temp array
    }
}

void merg_sort(vector<int>&a,int i,int j){
    if(i==j) return;
    int mid=(i+j)/2;
    merg_sort(a,i,mid);
    merg_sort(a,mid+1,j);
    merge(a,i,mid,mid+1,j);

}
/*
mistake:
pass by referece

*/


int main(){
    vector<int>a={1,0,6,2,5};
  int i=0;
  int j=a.size()-1;
  merg_sort(a,i,j);
  for(auto i:a){
    cout<<i;

  }


}