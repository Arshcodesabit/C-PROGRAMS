#include<stdio.h>
int main() {
    int num1;
    int num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("Sum of two numbers is %d", sum); 
    return 0;
}   