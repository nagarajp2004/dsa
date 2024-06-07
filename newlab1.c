#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define days 3
struct activity{
    char *nday;
    int ddate;
    char *des;
};
 
typedef struct activity * plan;

plan create(){
    plan x;
    x=(plan)malloc((sizeof(struct activity))*7);
    if(x==NULL){
        exit(0);
    }
    return x;
}

void read(plan p){
  for(int i=0;i<days;i++){
    printf("etner the day \t date \t description\n");
    p[i].nday=(char * )malloc(sizeof(char)*9);
    scanf("%s",p[i].nday);
    scanf("%d",&p[i].ddate);
    p[i].des=(char*)malloc(sizeof(400));
    scanf("%s",p[i].des);
    p[i].des=(char*)realloc(p[i].des,strlen(p[i].des)+1);
  }      
}

void display(plan p){
    int i=0;
    printf("daY activity\n");
    for(i;i<days;i++){
      printf("day %d",i+1);
      printf("%s \t %d \t%s",p[i].nday,p[i].ddate,p[i].des);
    }
}

int main(){
    plan cal=NULL;
    cal=create();
    read(cal);
    display(cal);
}