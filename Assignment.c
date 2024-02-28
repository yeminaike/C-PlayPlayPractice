#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1;
    int num2;
    int num3;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("Enter third integer: ");
    scanf("%d", &num3);

    int sum = add(num1, num2);

    int result = sum - num3;

    printf("Result: %d\n", result);

    return 0;
}
