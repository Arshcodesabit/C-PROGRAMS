//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += 2 * i - 1;  // Formula for the i-th odd number
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // Use long long to handle large results

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) { // Start from 2 and increment by 2
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
