#include <stdio.h>


int sum(int a, int b);

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result = sum(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
int sum(int a, int b) {
    return a + b;
}

