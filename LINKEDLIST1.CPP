#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
 Node(int value){
    data =value;
    next=nullptr;
 }    
};
 Node* create_ll(int a[],int ind,int size){
    if(ind==size){
        return nullptr;
    }
  Node* temp=new Node(a[ind]);
  temp->next=create_ll(a,ind+1,size);
  return temp;
 }
void display(Node* head){
    while(head!=nullptr){
      cout<<head->data;
      head=head->next;
    }
}
Node* dele_node(int index,Node* cur){
  if(index==1){
    Node* temp=cur->next;
       delete cur;
       return temp;
  }
  cur->next=dele_node(index-1,cur->next);
  return cur;
}




 int main()
{
Node* head=nullptr;
int a[6]={1,2,3,4,5,6};
head=create_ll(a,0,6);

head=dele_node(3,head);
display(head);
}

