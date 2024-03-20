#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int arr[MAX_SIZE] = {2, 5, 8, 10, 15, 20, 25, 30, 35, 40};
    int searchValue;
    int found = 0;

    printf("Enter the value to search for: ");
    scanf("%d", &searchValue);

    for (int i = 0; i < MAX_SIZE; i++) {
        if (arr[i] == searchValue) {
            printf("Value %d found at index %d\n", searchValue, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value %d not found in the array list\n", searchValue);
    }

    return 0;
}

