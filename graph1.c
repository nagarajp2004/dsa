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
//implicit stack using
int main()
{/////////////////////////////depth for sesarch////////////////////////
int s[10],top=-1,n;
int src;
printf("enter the numbers of verices \n");
scanf("%d",&n);
read_adj(a,n);
for(src=0;src<n;src++)
 {
    for(int i=0;i<n;i++)
    {
        f[i]=0;
    }   
    f[src]=1;
    s[++top]=src;
    printf("node reachable from %d:%d",src,src);
    while(top!=-1)
    {
        int no_con=0;
       for(int i=0;i<n;i++)
    { 
        if(a[s[top]][i]==1 && f[i]==0)
        {
            printf("%d",i);
            s[++top]=i;
            f[i]=1;
            no_con=1;
            break;
        }
    }
    if(no_con==0)
    {
        s[top--];
    }
    }
 }

}