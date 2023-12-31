#include<stdio.h>
void str_cpy(char goo[10],char name[10]){
  int i=0;
  while(name[i]!='\0'){
   goo[i]=name[i];
   i++;
  }
  goo[i]='\0';



}
int str_cmp(char a[],char b[]){
    int i=0;
  
    while(a[i]==b[i]){
        if(a[i]=='\0'&&b[i]=='\0'){
            return 0;
            break;
        }
        i++;
    }
    if(a[i]>b[i] || b[i]>a[i]){
        return a[i]-b[i];
    }

}
int main(){
    char name[10];
    int k;
    scanf("%s",name);
    char goo[10]; 
    scanf("%s",goo);
     k=str_cmp(name,goo);
   
    printf("%d",k);
}