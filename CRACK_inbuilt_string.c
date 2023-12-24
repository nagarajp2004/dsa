
#include<string.h>
#include<stdio.h>

void sring_copy( char *a, char *b){
    for(int i=0;;i++){
     a[i]=b[i];
     if(a[i]=='\0'){
        break;
     }
    }
}
int main(){
char name[10];
char name2[39]="nagaraj";
// printf("%s",name);
// strcpy(name,name2);
// printf("%s",name);
 sring_copy(name,name2);
printf("%s",name);


}