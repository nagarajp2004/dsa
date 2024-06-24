#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    

Node (int val){
    data=val;
    next=NULL;
    prev=NULL;
}


};

Node* creat_dll(int *a,int n){
  Node* head=NULL,*temp,*tail;
  for(int i=0;i<n;i++){
     if(head==NULL){
         head=new Node(a[i]);
        
         tail=head;
     }
     else
     {
     temp = new Node(a[i]);
      temp->prev=tail;
      tail->next=temp;
      tail=temp;    
     }
  }
  return head;
}
void display(Node* head)
{
  while(head!=NULL){
    cout<<head->data;
    head=head->next;
  }    

}
Node* create_dll_recu(int *a,int index,int n,Node *head,Node* tail){
    if(head==NULL){
        head=new Node(a[index]);
        index++;
       tail=head;
       
    }
     if(index==n){
        return NULL;
     }
  
Node *temp=new Node(a[index]);
tail->next=temp;
temp->prev=tail;
tail=temp;
index++;
return create_dll_recu(a,index,n,head,tail);
 
}
int main(){
 int a[6]={2,3,4,5,6,7};
 Node* head =NULL;
 Node* tail=head;
  head=create_dll_recu(a,0,6,head,tail);
 display(head);
}