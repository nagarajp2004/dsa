#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int board[10],n;
void print(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(board[i]==j){
                printf("\tq");
            }
            else{
                printf("\t-");
            }
        }
        printf("\n");
    }
}

int inplace(int row,int col){
    for(int i=1;i<=row-1;i++){
        if(board[i]==col || abs(board[i]-col)==abs(i-row)){
            return 0;
        }
    }
    return 1;
}

void queen(int row,int n){
    for(int col=1;col<=n;col++){
        if(inplace(row,col)){
            board[row]=col;
            if(row==n){
                print();
            }
            else{
                queen(row+1,n);
            }
        }
    }
}
int main(){
    scanf("%d",&n);
    queen(1,n);
}