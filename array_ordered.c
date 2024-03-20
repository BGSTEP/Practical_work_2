#include <stdio.h>

#define MAX_SIZE 10

int binarySearch(int arr[], int size, int searchValue) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == searchValue) {
            return mid;
        } else if (arr[mid] < searchValue) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[MAX_SIZE] = {2, 5, 8, 10, 15, 20, 25, 30, 35, 40};
    int searchValue;
    printf("Enter the value to search for: ");
    scanf("%d", &searchValue);
    int index = binarySearch(arr, MAX_SIZE, searchValue);
    if (index != -1) {
        printf("Value %d found at index %d\n", searchValue, index);
    } else {
        printf("Value %d not found in the array list\n", searchValue);
    }
    return 0;
}

