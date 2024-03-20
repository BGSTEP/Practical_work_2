#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    if (a > b) {
        printf("%d is larger than %d\n", a, b);
    } else if (b > a) {
        printf("%d is larger than %d\n", b, a);
    } else {
        printf("Both values are equal: %d\n", a);
    }
    return 0;
}


