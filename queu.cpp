#include<iostream>
using namespace std;

class queue
{
int *arr;
int front,rear,size;
public:

queue(int n)
{
 arr=new int[n];
 size=n;
 front=rear=-1;
}
bool isempty()
{
    return front==-1;
}
bool isfull()
{
  return rear==size-1;
}

void push(int x)
{
  if(isempty())
  {
      front=rear=0;
      cout<<"pushed";
      arr[0]=x;
  }
 else if(isfull())
 {
   cout<<"overflow";
   return ;
 }
  else{
    rear=rear+1;
    arr[rear]=x;
    cout<<"pushed";
  }
}
void pop()
{
    if(isempty())
    {
        cout<<"underflow";
        return;
    }
    else if(front==rear){
       rear=front=-1;
    }
    else
    {
        cout<<"poped";
        front++;
    }
}

};