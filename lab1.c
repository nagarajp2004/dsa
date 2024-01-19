# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# define DAYS 3
typedef 
struct activity
{
char *nday;
int dday;
char *desc;
}Plan;

Plan* create()
{
Plan *t; 
t= (Plan *) malloc(sizeof(Plan)*7);
if (t == NULL)
{ printf("Sufficient memory not allocated\n"); 
return 0; 
}
return t;
}


void read(Plan *p)
{
int i;
for(i=0;i<DAYS;i++)
{
p[i].nday = (char *) malloc(9);
printf("Enter name of the day "); 
scanf(" %s",p[i].nday);
printf("Enter date of the day "); 
scanf("%d",&(p[i].dday));
printf("Enter description of the activity ");
p[i].desc = (char *) malloc(400);
scanf(" %s",p[i].desc);
p[i].desc = (char *) realloc(p[i].desc,strlen(p[i].desc)+1);
}
}


void display(Plan *p)
{
int i;
printf("**** Activity description for %d days ****\n",DAYS);
for(i=0;i<DAYS;i++)
{
printf("\nName of the day : %s", p[i].nday);
printf("\nDate of the day : %d", p[i].dday);
printf("\nActivity description %s: ", p[i].desc);
}
}



int main()
{
Plan *cal = NULL;
cal = create( );
read(cal);
display(cal);
}

