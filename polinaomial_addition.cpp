#include<stdio.h>
#include<stdlib.h>
struct poly{
int cf;
int px;
int py;
int pz;
struct poly* link;
};
typedef struct poly *P;

P getnode(){
    P x;
    x=(P)malloc(sizeof(struct poly));
    return x;
}
void read_poly(P p1,int n)
{
    P temp,next;
    int i;
    for(i=0;i<n;i++)
    {
        temp=getnode();
        printf("etner the cofeecient ,power of x, power of y,power of z\n");
        scanf("%d%d%d%d",&(temp->cf),&(temp->px),&(temp->py),&(temp->pz));
        next=p1->link;
        p1->link=temp;
        temp->link=next;
    }

}

void display_poly(P p1)
{
P cur;
printf("elements of poly\n");
cur=p1->link;
while( cur!=p1)
{
if(cur->cf>0){
printf("+%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
}
else{
    printf("%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
}
printf("\n");
cur=cur->link;
}
}
P compare(P term,P p2){
    P cur;
    cur =p2->link;
    while(cur!=p2){
        if(cur->px==term->px && cur->py==term->py && cur->pz==cur->pz){
            return cur;                           
        }
       cur=cur->link; 
    }
    return NULL;    
}

void insert(P p3,int cf ,int px,int py,int pz){
    P temp,next;
    temp=getnode();
    temp->cf=cf;
    temp->px=px;
    temp->py=py;
    temp->pz=pz;
    next=p3->link;
    

}




int main(){
P p1=getnode();
p1->link=p1;
read_poly(p1,3);
display_poly(p1);
}