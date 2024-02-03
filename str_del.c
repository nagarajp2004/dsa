#include<stdio.h>
void strdel(char *input_str, char char_to_remove)
 {
   
 int index = -1;
    for (int i = 0; input_str[i] != '\0'; i++)
     {
        if (input_str[i] == char_to_remove)
         {
            index = i;
            break;   
         }
    }
    {
        for (int i = index; input_str[i] != '\0'; i++)
        {
            input_str[i] = input_str[i + 1];
        }
    }
 }
 void accept_str(char a[]){
    printf("enter the string\n");
    scanf("%s",a);
 }
 void display(char a[]){
    printf("%s",a);
    
 }


int main(){
char a[30],ch;
accept_str(a);

printf("enter the char\n");
scanf(" %c",&ch);
strdel(a,ch);
printf("after modifing the string:\n ");
display(a);

}