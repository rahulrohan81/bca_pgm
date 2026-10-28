#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int main() {
    int *ptr = NULL;
    int i;

    // 1. Dynamically allocate memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));

    // Check if the allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 2. Store values in the allocated memory location
    for (i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10; // Assigning values: 10, 20, 30, 40, 50
    }

    // 3. Display the values stored in the allocated location
    printf("Values stored in the dynamically allocated memory:\n");
    for (i = 0; i < 5; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // 4. Free the dynamically allocated memory to prevent memory leaks
    free(ptr);
    ptr = NULL; // Good practice to avoid dangling pointers

    return 0;
}
