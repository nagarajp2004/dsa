#include<stdlib.h>
#include<stdio.h>
int w[10],p[10],n;
 int max(int a,int b){
    return (a<b)? b:a;
 }

 int knap(int i,int m){
    if(i==n+1){
        return 0;
    }
    if(w[i]>m)
    return knap(i+1,m);

    return max(knap(i+1,m),knap(i+1,m-w[i])+p[i]);
 }

int main() {
    int m, i, max_profit;

    // Input the number of items
    printf("\nEnter the number of objects: ");
    scanf("%d", &n);

    // Input the capacity of the knapsack
    printf("\nEnter the knapsack capacity: ");
    scanf("%d", &m);

    // Input the profit and weight for each item
    printf("\nEnter profit followed by weight:\n");
    for (i = 1; i <= n; i++)
        scanf("%d %d", &p[i], &w[i]);

    // Calculate the maximum profit using the knap function
    max_profit = knap(1, m);

    // Print the maximum profit
    printf("\nMax profit = %d", max_profit);
    
    return 0;
}