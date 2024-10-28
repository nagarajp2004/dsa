#include<bits/stdc++.h>
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int x){
        data=x;
        right=NULL;
        left=NULL;
    }

};
Node* insert(int* arr,int i,Node* root)
{
  Node* temp=new Node(arr[i]);
  Node* cur=root;
  if(cur==NULL){
    return temp;
  }
  Node* pre=cur;
  while(cur){
       pre=cur;
       if(cur->data>arr[i]){
        cur=cur->left;
       }
       else{
        cur=cur->right;
       }
  }
  if(pre ->data>arr[i]){
    pre->left=temp;
  }
  else
   pre->right=temp;
   return root;
}

int main()
{
 Node* root=NULL;
 int a[5]={3,56,2,7,1};
 for(int i=0;i<5;i++){
    root=insert(a,i,root);
 }         
}