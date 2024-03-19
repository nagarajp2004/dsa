#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct poly{
    int cf,px,py,pz;
    struct poly* link;
};
typedef struct poly * P;

P getnode(){
    P x;
    x=(P)malloc(sizeof(struct poly));
    return x;
}

void insertfromu(P temp){
    printf("etner the cf,px,py,pz\n");
    scanf("%d%d%d%d",&(temp->cf),&(temp->px),&(temp->py),&(temp->pz));
}
void readpoly( P p1,int n){
    P temp,next;
  for(int i=0;i<n;i++){  
    temp=getnode();
    insertfromu(temp);
    temp->link=NULL;
    next=p1->link;
    p1->link=temp;
    temp->link=next;
  }
}

void display(P head){
    P cur=head->link;
    while(cur!=head){
        if(cur->cf>0){
            printf("+%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
        }
        else{
            printf("%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
        }
        cur=cur->link;
    }
}

P compare(P term ,P p2){
       P cur;
       cur=p2->link;
       while(cur!=p2){
        if(cur->px==term->px&& cur->py==term->py && cur->pz==term->pz){
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
    p3->link=temp;
    temp->link=next;
}

void add(P p1,P p2,P p3){
    P cur,address,term;
    cur=p1->link;
    while(cur!=p1){
        address=compare(cur,p2);
        if(address!=NULL){
            insert(p3,cur->cf+address->cf,cur->px,cur->py,cur->pz);  
            address->cf=-999;
        }
        else{
             insert(p3,cur->cf,cur->px,cur->py,cur->pz);  
        }
        cur=cur->link;
    }
    cur=p2->link;
    while(cur!=p2){
        if(cur->cf!=-999){
            insert(p3,cur->cf,cur->px,cur->py,cur->pz);
        }
    cur=cur->link;
    }

}
int main(){
    int n;
    P p1,p2,p3;
    p1=getnode();
    p2=getnode();
    p3=getnode();
    p1->link=p1;
    p2->link=p2;
    p3->link=p3;
    printf("etn number of terms");
    scanf("%d",&n);
    printf("ern poly 1");
    readpoly(p1,n);
    printf("etner te poly 2");
    readpoly(p2,n);
    add(p1,p2,p3);
    display(p3);
}
