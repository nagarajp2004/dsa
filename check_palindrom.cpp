#include<stack>
#include<iostream>
using namespace std;

    class Node
    {
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = nullptr;
        }
        Node(int data)
        {
            this->data = data;
            this->next = nullptr;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };


bool isPalindrome(Node *head)
{
    stack<Node*>s;
    Node* cur=head;
    while(cur!=nullptr){
        s.push(cur);
        cur=cur->next;
    }
    cur=head;
    while(!s.empty()){
          if(s.top()==cur){
              s.pop();
              cur=cur->next;
          }
          else
            return false;
    }
    // write your code here
    return true;
}
int main(){
    
}