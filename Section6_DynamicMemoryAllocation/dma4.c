#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, lines=3, columns=3;

    p = (int *)malloc(lines * columns * sizeof(int));

    if (p) {
        for (int i = 0; i < lines; i++) {
            for (int j = 0; j < columns; j++) {
                p[i * columns + j] = 3 * i + j;
            }
        }

        for (int i = 0; i < lines; i++) {
            for (int j = 0; j < columns; j++) {
                printf("The position %d%d of your bi-dim array has value: %d\n", i, j, p[i * columns + j]);
            }
        }
    } else {
        printf("Error, not enough memory.");
    }

    printf("The pointer p occupies %ld bytes of memory!\n", lines * columns * sizeof(int));

    //The memory of the pointer remains allocated, it should be freed.
    free(p);
    p = NULL;
    
    return 0;
}