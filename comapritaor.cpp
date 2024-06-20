#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class date{
  public:
  int start;
  int end;
  int pos;
};
bool comp(date a, date b) {
    return a.end < b.end;
}

int no_mettin(int st[],int end[],int n){
    vector<date>a(n);
    for(int i=0;i<n;i++){
        a[i].start=st[i];
       a[i].end=end[i];
       a[i].pos=i+1;
    }
     sort(a.begin(),a.end(),comp);
     int count=1;
     vector<int>pos(n);
     int free=a[0].end;
        pos.push_back(1); 
     for(int i=1;i<n;i++){
         if(a[i].start > free)
{
    count++;
   pos.push_back(i+1);
   free=a[i].end;
}     
}
     return count;
}

int main(){
int N = 6;
int start[] = {1,3,0,5,8,5};
int end[] =  {2,4,6,7,9,9};
cout<<no_mettin(start,end,N);

}