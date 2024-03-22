#include<stdlib.h>
#include<stdio.h>
#define hz 3
struct employ{
    int empno;
    char name[30];
    int sal;
};
typedef struct employ emp;
 FILE *fp;
struct hashtable{
    int key;
    long int addres;
}; 
typedef struct hashtable ht;

int hashf(int a){
    return a%hz;
}

void insert(FILE *fp,ht *h,int n){
     emp a;
     int hindex,countindex;
     for(int i=0;i<n;i++)
     {
        printf("etner the emp number \t emp name \t sAL\n");
        scanf("%d%s%d",&(a.empno),a.name,&(a.sal));
       countindex=hindex=hashf(a.empno);
       while(h[hindex].key!=-1){
        hindex=(hindex+1)%hz;
        if(hindex==countindex){
            printf("the insertuion is not possible\n");
            return ;
        }
       }
       h[hindex].key=a.empno;
       fseek(fp,0,SEEK_END);
       h[hindex].addres=ftell(fp);
       fwrite(&a,sizeof(emp),1,fp);
       printf("insertion is suceesfull\n");
     }   
  
}
void display(FILE *fp,ht* h,int n){
    emp a;
    for(int i=0;i<hz;i++){
      if(h[i].key!=-1){
       fseek(fp,h[i].addres,SEEK_SET);
       fread(&a,sizeof(emp),1,fp);
       printf("name is %s \t emp no is %d\n",a.name,a.empno);         
    }
    }}
void search(FILE *fp,ht *h,int n){
    emp a;
    int hindex,countindex;
    printf("etnter the employ number to search\n");
    scanf("%d",&a.empno);
    hindex=countindex=hashf(a.empno);
    while(h[hindex].key!=a.empno){
        hindex=(hindex+1)%hz;
        if(hindex==countindex){
            printf("search is unsucessfull\n");
            return ;
        }
    }
    fseek(fp,h[hindex].addres,SEEK_SET);
    fread(&a,sizeof(emp),1,fp);
    printf("%s is the name ",a.name);
    
}
int main(){
    ht h[hz];
    int n=3,ch;
    fp=fopen("ax.txt","w+");
    for(int i=0;i<hz;i++){
      h[i].key=-1;
    }
    printf("enter 1 to inser 2 to display 3 to sear\n");
    while(1){
        printf("etner rthe choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            insert(fp,h,n);
            case 2:
            display(fp,h,n);
            case 3:
            search(fp,h,n);
            case 4:
            exit(0);
        }
    }

}