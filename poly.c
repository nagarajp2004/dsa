#include<stdio.h>
typedef
struct poly{
int cf;
int px;
}P;
void accept(P p1[10],int n){
    printf("enter the polynomial");
    for(int i=0;i<n;i++){
        printf("enter the cf and pf");
        scanf("%d%d",&(p1[i].cf),&(p1[i].px));

    }
}
void display(P p1[10],int n){
    printf("the enterd polynomial");
    for(int i=0;i<n;i++){
        if(p1[i].cf>0){
            printf("+%dX^%d",p1[i].cf,p1[i].px);
        }
        else{
            printf("%dX^%d",p1[i].cf,p1[i].px);
        }
        
    }
}
int check_power(P p1[10],P a,int n){
    for(int i=0;i<n;i++){
        if(a.px==p1[i].px){
            return i;
        }

    }
    return -1;
}
int add(P p1[10],int n,P p2[10],int m,P p3[10]){
    int index,k=0;
    for(int i=0;i<m;i++){
        index=check_power(p1,p2[i],n);
        if(index !=-1){
            p3[k].cf=p1[index].cf+p2[i].cf;
          p3[k].px=p2[i].px;
          p1[index].cf=999;
    }
    else{
        p3[k].cf=p2[i].cf;
        p3[k].px=p1[i].px;
    }
    k++;
    }
    for(int i=0;i<n;i++)
    {
        if(p1[i].cf!=999){
            p3[k].cf=p1[i].cf;
            p3[k].px=p1[i].px;
            k++;
        }
    }
    return k;

}
int main(){
    P p1[10],p2[10],p3[10];
    int n,k,m;
    printf("enter the number of terms ");
    scanf("%d%d",&n,&m);
    accept(p1,n);
    accept(p2,m);
    display(p1,n);
    display(p2,m);
    k=add(p1,n,p2,m,p3);
    printf("\n");
    display(p3,k);
}