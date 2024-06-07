#include<iostream>
#include<map>
 class Node {
  public:
      int data;
      Node *next;

   Node(int data) {
          this->data = data;
          this->next = NULL;
      }
 };
using namespace std;

int lengthOfLoop(Node *head) {
    // Write your code here
    map<Node*,int>mpp;
    int time=0;
    Node* cur=head;
    while(cur!=nullptr){
        if(mpp.count(cur)==1){
             int value=mpp[cur];
             return time-value;
        }
        time++;
        mpp[cur]=time;
        cur=cur->next;
    }
    return 0;


}
int  main(){
    
}