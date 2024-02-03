#include<iostream>
using namespace std;
#include<vector>
class Solution{
  public:
    vector<int> maxPrefixes(int a[], int l[], int r[], int N, int q) {
        int x,y,sum=0;
        vector<int>z;
        for(int i=0;i<q;i++){
            x=l[i];
         
            y=r[i];
  
            for(int j=x;j<=y;j++){
                sum+=a[j];
                cout<<sum<<" ";
            
            }
            z.push_back(sum) ;     
            

         return z;
        }
    }
};
int main(){
    Solution a;
   int x[20]={-1, 2, 3, -5};
   int n=4;
   int q=1;
   int l[20]={0,1};
   int r[10]={1,3};
   vector<int>k=a.maxPrefixes(x,l,r,n,q);
   
   
}