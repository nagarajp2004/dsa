#include<stdio.h>
typedef
struct  emp{
  char name[30];
  int age;
  float sal;

}E;
void accept(E *a){
    printf("enter the name ,age ,sal");
    scanf("%s",a->name);
    scanf("%d%f",&(a->age),&(a->sal));
}
void display(E a){
    printf("my name is%s\t\t%d is my age\tmy sal is %f",a.name,a.age,a.sal);
}
int main(){
E a;
accept(&a);
display(a);                                                                                                                                             
}