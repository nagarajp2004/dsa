#include <stdio.h>
int main(){
    int i,j,n,flag=1;
    printf("entet the range ");
    scanf("%d",&n);
    printf("2");
    for(i=3;i<=n;i++){
      flag=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
                break;
            }

        }
        
        if(flag==1){
            printf("%d \t",i);
        }





    }
    }
