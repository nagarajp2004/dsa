#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct poly
{
  int cf;
  int px;
  int py;
  int pz;
  struct poly* link;
};
typedef struct poly* P;

P getnode(){
    P temp;
    temp=(P)malloc(sizeof(struct poly));
    return temp;
}

void read_poly(P p1,int n){
    P temp,next;
    int i;
    for(i=0;i<n;i++){
        temp=getnode();
        printf("enter the cf px,py,pz\n");
        scanf("%d%d%d%d",&(temp->cf),&(temp->px),&(temp->py),&(temp->pz));
        next=p1->link;
        p1->link=temp;
        temp->link=next;
    }
}

void display(P head){
    P cur;
    printf("ele of poly\n");
    cur=head->link;
    while(cur!=head){
        if(cur->cf>0){
            printf("+%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
        }
        else{
             printf("+%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
        }
        cur=cur->link;
    }
    printf("\n");

}

P compare(P term,P p2){
    P cur;
    cur=p2->link;
    while(cur!=p2){
        if(cur->px==term->px && cur->py==term->py && cur->pz==term->pz){
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
    P cur,term,address;
    cur=p1->link;
    while(cur!=p1){
        address=compare(cur,p2);
        if(address==NULL){
            insert(p3,cur->cf,cur->px,cur->py,cur->pz);
        }
        else{
            insert(p3,cur->cf+address->cf,cur->px,cur->py,cur->pz);
             address->cf=-999;
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
int evaluate(P p1){
    P cur;
    int x,y,z,res=0;
    printf("enter the value of x,y,z");
    scanf("%d%d%d",&x,&y,&z);
    cur=p1->link;
    while(cur!=p1){
    res=res+(cur->cf)*(pow(x,cur->px))*(pow(y,cur->py))*(pow(z,cur->pz));
    cur=cur->link;
    }
  return res;
}

int main(){
    int n,ch;
    P p1,p2,p3;
    p1=getnode();
    p2=getnode();
    p3=getnode();
    p1->link=p1;
    p2->link=p2;
    p3->link=p3;
    while(1){
       printf("enter 1  addition \n 2 evaluate \n 3 exit");
       scanf("%d",&ch);
       switch(ch){
         case 1:
         printf("etner the number of terms\n");
         scanf("%d",&n);
         printf("etner the poly 1\n");
         read_poly(p1,n);
         printf("etner the number of terms\n");
         scanf("%d",&n);
         printf("etner the poly 2\n");
         read_poly(p2,n);
         add_poly(p1,p2,p3);
         display(p3);
         break;
         case 2:
         printf("enter the number of terms \n");
         scanf("%d",&n);
         printf("etner the poly to evaluate\n");
         read_poly(p1,n);
         printf("the resultant is %d",evaluate(p1));
         break;
         default:
         exit(0);
       }
    }
}

