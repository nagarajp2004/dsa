# include <stdio.h>

int slen(char *s) 
{
int len=0;
for(;s[len] != '\0';len++);
return len;
 }
 void replace(char *T, char *P, char *REP, char *FIN)
{
int k=0,s = slen(T),r=slen(P),e,q=0,z;
for(;k<s;)
{
for(e=0;e<r;e++){
if (P[e] != T[k+e])
break;
}
if (e==r){
//printf("Substring found at %d \n",k);
for(z=0;z<slen(REP);z++)
FIN[q++] = REP[z];
k = k + r;
}
else
FIN[q++] = T[k++];
}
FIN[q]='\0';
}
int main() {
char T[40]={"bapqrabyabbzzba"};
char P[20]={"ba"},REP[20]={"BA"}, FIN[50];
replace(T, P, REP, FIN);
printf("Output %s\n",FIN);
}

