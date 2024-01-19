#include<stdio.h>
char* strdl(char a[20],char c){
  int i=0;
  while(a[i]!='\0'){
   
  if(a[i]==c){
    int j=i;
    while(a[j]!='\0'){
        a[j]=a[j+1];
         j++;
    }
  return a;
  }
  i++;
  }  

}
int main(){
    char a[20],c;
printf("enter the charter\n");
scanf("%c",&c);
printf("enter the string");
scanf("%s",a);
    printf("%s",strdl(a,c));
}