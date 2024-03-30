#include<stdio.h>
//enter the adjacny matrix
// number tree node
int a[10][10],f[10];
void read_adj(int a[10][10],int n)
{   int i,j;
    printf("enter the adjacent vslues");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         printf("a[%d][%d]=",i,j);   
         scanf("%d",&a[i][j]);
        }
    }
}
int main(){
    ///////////////////////////breadth for search in graph///////////////////////////////////////////
    ////////////////////////////////////quesa is uesd///////////////////////////////////////////////
    int q[100],front=0,rear=-1;
    int n,src;
    printf("enter the number verices\n");
    scanf("%d",&n);
    read_adj(a,n);
    for(src=0;src<n;src++){
        for(int i=0;i<n;i++)
        {
            f[i]=0;
        }
        printf("the vertices %d is reachable :%d",src,src);
        q[++rear]=src;
        f[src]=1;
        while(rear>=front){
            for(int i=0;i<n;i++)
            {
                if(a[q[front]][i]==1 && f[i]==0)
                {
                   printf("%d",i);
                   q[++rear]=i;
                   f[i]=1;      
                }
            } 
            front++;         
            
        }
    }
}