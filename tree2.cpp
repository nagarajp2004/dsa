#include<queue>
#include<iostream>
#include<stack>
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


node* binary_tree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    node* temp=new node(x);
    temp->left=binary_tree();
    temp->right=binary_tree();
    return temp;
}

int main(){
  node* tr=binary_tree();

}

