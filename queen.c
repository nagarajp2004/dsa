#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int  board[10], n;

void print(){
    printf("the solution:\n");
    for(int i = 1; i <= n; i++){
        printf("\t%d", i);
    }
    printf("\n"); // Missing newline after header row
    for(int i = 1; i <= n; i++){
        printf("%d\t", i); // Corrected position of row index and tab
        for(int j = 1; j <= n; j++){
            if(board[i] == j){
                printf("q\t"); // Incorrect case for 'q'
            }
            else {
                printf("-\t");
            }
        }
        printf("\n");
    }
}

int inplace(int row, int col){
   for(int i = 1; i <= row - 1; i++){
        if(board[i] == col || abs(board[i] - col) == abs(i - row)){
            return 0;
        }
    }
    return 1;
}      
 
void queen(int row, int n){
    int col;
    for(col = 1; col <= n; col++){
        if(inplace(row, col)){
            board[row] = col;
            // Moved if-else inside the condition check
            if(row == n){
                print();
            }
            else {
                queen(row + 1, n);
            }
        }
        // This line was missing: board[row] = 0; // backtrack
    }
}

int main() {
    printf(" - N Queens Problem Using Backtracking -");
    printf("\n\nEnter number of Queens: ");
    scanf("%d", &n);
    queen(1, n); // Start placing queens from the first row
    return 0;
}
