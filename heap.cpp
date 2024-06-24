#include<iostream>
using namespace std;
 class maxheap{
 int *arr;
 int size;
 int total_size;
 public:
  
  maxheap(int n){
     arr=new int[n];
     size=0;
     total_size=n;
  }
  void insert(int val){
        if(size==total_size){
           cout<<"heap overflow";
           return;
        }
        arr[size]=val;
        int index=size;
        size=size+1;
       while(index>0 && arr[(index-1)/2]<arr[index]){
             swap(arr[index],arr[(index-1)/2]);
             index=(index-1)/2;
       } 
       cout<<arr[index]<<"success"<<endl; 

  }
 void dele(){
    cout<<arr[0]<<"is dleteed";
    arr[0]=arr[size-1];
    size--;
    int index=0;
    while(index<size && arr[index]<max(arr[2*index+1],arr[2*index+2]))
    {
       if(arr[index*2+1]>arr[index*2+2])
       {
        swap(arr[index],arr[index*2+1]);
        index=index*2+1;
       }
       else
        {
          swap(arr[index],arr[index*2+2]);
          index=index*2+2;
       }
      
    }
 }
 };
int main(){
    maxheap h(6);
    h.insert(22);
    h.insert(33);
    h.insert(177);
    h.insert(2);
    h.insert(67);
    h.dele();
}