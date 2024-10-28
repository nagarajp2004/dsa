#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

// Function to find subsets with a given sum
void subsetSum(int set[], int subset[], int n, int subSize, int total, int nodeCount, int sum) 
{
    // Check if the current subset sum equals the target sum
    if (total == sum) {
        // Print the subset
        printf("Subset found: { ");
        for (int i = 0; i < subSize; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    } else {
        // Explore further elements to form subsets
        for (int i = nodeCount; i < n; i++) {
            subset[subSize] = set[i];  // Include the current element in the subset
            subsetSum(set, subset, n, subSize + 1, total + set[i], i + 1, sum);  // Recursively find subsets including this element
        }
    }
}

int main() {
    int set[MAX_SIZE];
    int subset[MAX_SIZE];
    int n, sum;

    // Input the number of elements in the set
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    // Input the elements of the set
    printf("Enter the elements of the set:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    // Input the target sum
    printf("Enter the sum to find subset for: ");
    scanf("%d", &sum);

    // Find and print subsets that sum up to the given value
    printf("Subsets with sum %d:\n", sum);
    subsetSum(set, subset, n, 0, 0, 0, sum);

    return 0;
}