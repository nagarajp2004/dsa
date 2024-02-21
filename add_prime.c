#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num < 2) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int n, count = 0, num = 2, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count < n) {
        if (is_prime(num)) {
            sum += num;
            count++;
        }
        num++;
    }

    printf("Sum of the first %d prime numbers is: %d\n", n, sum);

    return 0;
}
