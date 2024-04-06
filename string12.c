#include<stdio.h>
#include<string.h>
void scpy(char dest[100],char src[100]){
      int i=0;
      while(src[i]!='\0'){
        dest[i]=src[i];
        i++;
      }
      dest[i]='\0';
 }

int slen(char *d){
    int i=0;
    while(d[i]!='\0'){
        i++;
    }
    return i;
}
int scmp(char s1[],char s2[]){
    int i=0;
    while(s1[i]==s2[i]){
      if(s1[i]=='\0' && s2[i]=='\0'){
        return 0;
      }
      i++;
    }
    if(s1[i]<s2[i]){
      return -1;
    }
    else if(s1[i]>s2[i]){
      return 1;
    }
}
 char* scat(char s1[],char s2[]){
   int i=0,j=0;
   while(s1[i]!='\0'){
     i++;
   }
   while(s2[j]!='\0'){
    s1[i]=s2[j];
    i++;
    j++;
   }
   s1[i]='\0';
   return s1;
 }

int main(){
     char s1[100];
     scanf("%s",s1);
    // 
     char s2[100];
     scanf("%s",s2);
    printf("%s",scat(s1,s2));
    printf("%s",s1);
    // scpy(s2,s1);
    // strcpy(s2,s1);
    // printf("copies");
     //printf("%s",s2);
 

}
 