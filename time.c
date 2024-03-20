#include <stdio.h>
#include <time.h>

void printSecondsSinceExecution() {
    clock_t start_time = clock();

    while (1) {
        clock_t current_time = clock(); 
        double seconds = (double)(current_time - start_time) / CLOCKS_PER_SEC; 
        printf("Seconds since execution: %.0f\n", seconds);

        clock_t delay = CLOCKS_PER_SEC;
        while (clock() < current_time + delay) {}
    }
}

int main() {
    printSecondsSinceExecution();
    return 0;
}

