// memory_test.c
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        return -1; // Allocation failed
    }

    *ptr = 100; // Use the allocated memory

    free(ptr); // Properly free allocated memory
    return 0;
}