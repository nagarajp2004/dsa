#include<stdio.h>
#include<stdlib.h>
struct poly{
int cf;
int px;
int py;
int pz;
struct poly* link;
};
typedef struct poly*P;

P getnode(){
    P x;
    x=(P)malloc(sizeof(struct poly));
    return x;
}


void read_poly(P p1,int n){
   P temp,next;
 for(int i=0;i<n;i++){
    temp=getnode();
    printf("etner the cf \t px\t py\t pz\t\n");
    scanf("%d%d%d%d",&(temp->cf),&(temp->px),&(temp->py),&(temp->pz));
    next=p1->link;
    temp->link=next;
    p1->link=temp;
 }
}

void display(P p){
P cur;
cur=p->link;
printf("the elements of polynomial\n");
while(cur!=p){
if((cur->cf)>0){
printf("+%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
}
else{
    printf("%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
}
cur=cur->link;
}
printf("\n");
}

P comapare1(P term ,P p2){
  P cur;
  cur=p2->link;
  while(cur!=p2){
    if(cur->py==term->py&&cur->px==term->px&&cur->pz==term->pz){
        return cur;
    }
    cur=cur->link;
  }
  return NULL;

} 

void insert(P p3,int cf,int px,int py,int pz){
    P temp,next; 
    temp=getnode();
    temp->cf=cf;
    temp->px=px;
    temp->py=py;
    temp->pz=pz; 
    next=p3->link;
    temp->link=next;
    p3->link=temp; 
}


void add_poly(P p1,P p2,P p3){
    P cur,term,addres2;
    cur=p1->link;
    while(cur!=p1){
        addres2=comapare1(cur,p2);
        if(addres2!=NULL){
            insert(p3,addres2->cf+cur->cf,cur->px,cur->py,cur->pz);
            addres2->cf=-9999;
        }
        else{
            insert(p3,cur->cf,cur->px,cur->py,cur->pz);
        }
        cur=cur->link;
    }
   cur=p2->link;
   while(cur!=p2){
    if(cur->cf!=(-9999)){
        insert(p3,cur->cf,cur->px,cur->py,cur->pz);
    }
    cur=cur->link;
   }
    
}
int main(){
    P p1,p2,p3;
    p1=getnode();
    p2=getnode();
    p3=getnode();
    p1->link=p1;
    p2->link=p2;
    p3->link=p3;
    read_poly(p1,3);
    read_poly(p2,3);
   
    add_poly(p1,p2,p3);
    display(p3);

}