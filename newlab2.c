#include<stdio.h>
#include<stdlib.h>
int slen(char * a){
    int len=0;
    while(a[len]!='\0'){
        len++;
    }
    return len;
}

void replace(char *t,char *p,char * r,char* fin){
    int k=0,i,x=slen(p),y=slen(t),q=0;
    for(;k<y;){
        for( i=0;i<x;i++){
            if(p[i]!=t[k+i]){
                break;
            }
        }
        if(i==x){
           for(int j=0;j<slen(r);j++)
           fin[q++]=r[j];
         k=k+slen(r);

        }
        else{
            fin[q++]=t[k];
            k++;
        }

    }
    fin[k]='\0';
    
}
int main(){
    char *t={"asdfghasas"};
    char *p={"as"};
    char *r={"AS"};
     char fin[30];
     replace(t,p,r,fin);
     printf("%s",fin);
}