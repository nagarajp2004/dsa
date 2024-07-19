#include<iostream>
using namespace std ;
class Node
{
     public:
    int data;
    Node* next;
    Node* prev;

    Node(int x)
    { 
      data=x;
      next=NULL;
      prev=NULL;
    }

};
class dequeue
{
    Node* front;
    Node* rear;
   public:
    dequeue()
    {
        front=NULL;
        rear=NULL;
    }
  void push_front(int x)
  {
    if(front==NULL){
        front=rear=new Node(x);
        return ;
    }else{
        Node* temp=new Node(x);
        temp->next=front;
        front->prev=temp;
        front=temp;
        return;

    }
  }
  void push_back(int x){
    if(front==NULL)
    {
        front=rear=new Node(x);
        return;
    }
    else{
        Node* temp=new Node(x);
        rear->next=temp;
        temp->prev=rear;
        rear=temp;
        return;
    }
  }
  
  void pop_front()
  {
     if(front==NULL)
     {
        cout<<"empty";
        return;
     }
     else{
        Node* temp=front;
        front=front->next;
        delete temp;
        if(front){
            front->prev=NULL;
        }
        else{
            rear=NULL;
        }

     }
  }
  void pop_back()
  {
    if(front==NULL){
        return;
    }
    else{
        Node* temp=rear;
        rear=rear->prev;
        delete temp;
        if(rear){
            rear->next=NULL;
        } else{
            front=NULL;
        }
        return;
    }

  }
 int start(){
    if(front==NULL){
        return -1;
    }
    else{
        return front->data;
    }
 }

 int end(){
    if(front==NULL){
        return-1;
    }
    else{
        return rear->data;
    }
 }
 void display()
 {
    Node* temp=front;
   do {
        cout<<temp->data;
        temp=temp->next;
    }while(temp!=rear);
 }


};

int main()
{
  dequeue q;
  q.push_back(10);
  
  q.push_back(30);
 q.push_front(5);
   
  
 q.pop_back();
  cout<<q.end();
// q.display();
//   cout<<endl;
//   cout<<endl<<q.start()<<endl;
//   cout<<q.end();

}