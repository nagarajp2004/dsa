#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
typedef struct node* NODE;
NODE getnode(){
    NODE x;
    x=((NODE)malloc(sizeof(struct node)));
    if(x=NULL){
        exit(0);
    }

}
int main(){
    NODE first;
    first=getnode();
    first->info=22;
    first->link=NULL;
}