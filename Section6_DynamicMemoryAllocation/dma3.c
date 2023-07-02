#include <stdio.h>
#include <stdlib.h>

int main() {
    int dim, *p;

    printf("Type the dimension of your array: ");
    scanf("%d", &dim);

    // It takes an argument that specifies the number of bytes to allocate.
    // The result of the calloc function is a block of memory that is allocated on the heap, which is a region
    // of the computer's memory used for dynamic memory allocation. The calloc function returns a void pointer
    // (void *) that points to the beginning of the allocated memory block. However, in this case, the void
    // pointer is cast to an int pointer (int *) using (int *). This casting is done to indicate that the memory
    // block will be used to store integers.
    // calloc initializes the allocated memory to zero. It sets all the bytes of the allocated memory block to
    // zero.
    p = (int *)calloc(dim, sizeof(int));

    if (p) {
        for (int i = 0; i < dim; i++) {
            printf("Type the value for the %d position of the array: ", i);
            scanf("%d", &p[i]);
        }

        p = (int *)realloc(p, dim * sizeof(int));

        for (int i = 0; i < dim; i++) {
            printf("The value of the %d position is: %d.\n", i, p[i]); 
        }
    } else {
        printf("Error, not enough memory.");
    }

    printf("The pointer p occupies %ld bytes of memory!\n", dim * sizeof(int));

    //The memory of the pointer remains allocated, it should be freed.
    free(p);
    p = NULL;
    
    return 0;
}