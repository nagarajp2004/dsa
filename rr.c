#include<stdio.h>
int main(){
int t,i,n,j,bu[10]={0},wa[10]={0},tat[10]={0},max,ct[10];
float avt=0,att=0,temp=0;
printf("enter the number of process ");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("\n enter the burst time for process %d--",i+1);
    scanf("%d",&bu[i]);
    ct[i]=bu[i];
}
printf("enterte time slice ");
scanf("%d",&t);
max=bu[0];
for(int i=0;i<n;i++){
    if(max<bu[i]){
        max=bu[i];
    }
}
for( j=0;j<max;j++){
    for(int i=0;i<n;i++ ){
        if(bu[i]!=0){
            if(bu[i]>t){
                bu[i]=bu[i]-t;
                temp=temp+t;

            }
            else{
                tat[i]=temp+bu[i];
                temp=temp+bu[i];
                bu[i]=0;
            }
        } }}  
 for( i=0;i<n;i++)
{
wa[i]=tat[i]-ct[i];
att +=tat[i];
avt += wa[i];
}
printf("\n the average turnaround time is %f",att/n);
printf("\n the average waiting time is %f",avt/n);
printf("\n\tprocess\tburst time\t waiting time\tturn around\t \n");
for(int i=0;i<n;i++){
    printf("\t%d\t%d\t\t%d\t\t%d\n",i+1,ct[i],wa[i],tat[i]);
}




}






