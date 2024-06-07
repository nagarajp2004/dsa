#include <stdio.h>
struct poly{
    int cf;
    int px;

};
typedef struct poly P;
void accept_p(P p[10],int n){
 printf("entert the coefiicent\n");
 for(int i=0;i<n;i++){
   printf("enter hte cf and px\n");
   scanf("%d%d",&(p[i].cf),&(p[i].px));
 }
}
void display(P p[10],int n){
    for(int i=0;i<n;i++){
        if(p[i].cf>0){
            printf("+%dx^%d",p[i].cf,p[i].px);
        }
        else{
              printf("%dx^%d",p[i].cf,p[i].px);
        }
    }
}
int check_power(P term ,P p2[10],int n){
  for(int i=0;i<n;i++){
    if(term.px==p2[i].px){
        return i;
    }
  }
  return -1;
  
}

int addition(P p1[10],int n1,P p2[10],int n2,P res[20]){
     int index,k=0;
     for(int i=0;i<n1;i++){
     index=check_power(p1[i],p2,n2);
     if(index!=-1){
        res[k].cf=p1[i].cf+p2[index].cf;
        res[k].px=p1[i].px;
        p2[index].cf=-999;
        k++;
     }
     else{
        res[k].cf=p1[i].cf;
        res[k].px=p1[i].px;
        k++;
     }
     }
     for(int i=0;i<n2;i++){
        if(p2[i].cf!=-999){
            res[k].cf=p2[i].cf;
            res[k].px=p2[i].px;
            k++;
        }
     }
     return k;
}



int main(){
 
 P p1[10],p2[10],p3[10];
 int n1,n2,n3;
 printf("etnr hte numbwer of term in p1\n");
 scanf("%d",&n1);
 printf("etnr the number of term\n");
 scanf("%d",&n2);
 accept_p(p1,n1);
 printf("etnr the poly  2\n");
 accept_p(p2,n2);
 n3=addition(p1,n1,p2,n2,p3);
 display(p3,n3);
}