#include<stdio.h>
#include<stdlib.h>
#define Hz 3

FILE *fp;

struct employ{
    int empno;
    char name[30];
    int sal;
};

typedef struct employ EMP;

struct hashtable{
    int key;
    long int address;
};
typedef struct hashtable ht;

int hashval(int empno){
    return empno%Hz;
}

void insert(FILE *fp,ht *h,int n){
    EMP a;
    int i,hindex,countindex;
    for(int i=0;i<n;i++){
        printf("enter the employ number, name, and salary\n");
        scanf("%d%s%d",&(a.empno),a.name,&(a.sal));
        hindex=hashval(a.empno);
        countindex=hindex;
        while(h[hindex].key!=-1){
            hindex=(hindex+1)%Hz;
            if(hindex==countindex){
                printf("entry is not possible\n");
                return;
            }
        }
        h[hindex].key=a.empno;
        fseek(fp,0,SEEK_END);
        h[hindex].address=ftell(fp);
        fwrite(&a,sizeof(EMP),1,fp);
        printf("entry is successful\n");  
    }
}

void display(FILE *fp,ht *h,int n){
    EMP a;
    for(int i=0;i<Hz;i++){
        if(h[i].key!=-1){
            fseek(fp,h[i].address,SEEK_SET);
            fread(&a,sizeof(EMP),1,fp);
            printf("%d\t%s\t%d\n",a.empno,a.name,a.sal);
        }
    }
}

void search(FILE *fp,ht* h,int n){
    EMP a;
    int hindex,countindex;
    printf("enter the employ number to search\n");
    scanf("%d",&(a.empno));
    hindex=hashval(a.empno);
    countindex=hindex;
    while(h[hindex].key!=a.empno){
        hindex=(hindex+1)%Hz;
        if(hindex==countindex){
            printf("search is unsuccessful\n");
            return;
        }
    }
    fseek(fp,h[hindex].address,SEEK_SET);
    fread(&a,sizeof(EMP),1,fp);
    printf("%d\t%s\t%d\n",a.empno,a.name,a.sal);
}

int main(){
    ht h[Hz];   
    int n=3;
    int ch;
     printf("enter the number of employees\n");
                scanf("%d",&n);
    fp=fopen("wtx.txt","w+");
    for(int i=0;i<Hz;i++){
        h[i].key=-1;
    }
    printf("enter 1 to insert,\n 2 to search,\n 3 to display,\n 4 to exit\n");
    for(;;){
        scanf("%d",&ch);
        switch(ch){
            case 1:
               
                insert(fp,h,n);
                break;
            case 2:
                search(fp,h,n);
                break;
            case 3:
                display(fp,h,n);
                break;
            case 4:
                fclose(fp);
                exit(0); 
        }
    }
}
