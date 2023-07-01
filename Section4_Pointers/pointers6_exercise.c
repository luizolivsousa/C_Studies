#include <stdio.h>

void accumulate(int* a, int* b);

int main() {
    int a = 10;
    int b = 20;

    printf("%d %p\n", a, &a);
    printf("%d %p\n", b, &b);

    accumulate(&a, &b);

    printf("%d %p\n", a, &a);
    printf("%d %p\n", b, &b);
    
    return 0;
}

void accumulate(int* a, int* b) {
    (*a) = (*a) + (*b);
}