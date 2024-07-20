#include<queue>
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};

int main(){
    queue<node*>q;
    int x;
    cout<<"enter the value of root";
    cin>>x;
    node* root=new node(x);
    q.push(root);
    while(!q.empty()){
   node* temp=q.front();
   q.pop();
   cout<<"etner the left";
   cin>>x;
   if(x!=-1){
    temp->left=new node(x);
    q.push(temp->left);
   }
   cout<<"etnr the right child";
   cin>>x;
    if(x!=-1){
    temp->right=new node(x);
    q.push(temp->right);
   }

    }
}