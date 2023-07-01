#include <stdio.h>

int main() {
    int n;

    // Declaring pointer to a memory address.
    int* p;

    printf("Type a number: ");
    scanf("%d", &n);

    //Initializing a pointer.
    p = &n;

    printf("The typed number was %d\n", n);
    printf("The memory address of the number is %p\n", &n);
    printf("The memory address the pointer points to is %p\n", (void *)p);

    return 0;
}