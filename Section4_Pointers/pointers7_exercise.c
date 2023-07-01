#include <stdio.h>

int orderValues(int* a, int* b, int* c);

int main() {
    int a, b, c;

    printf("Give the values to be ordered:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    orderValues(&a, &b, &c);

    printf("After ordering:\na = %d, b = %d, c = %d\n", a, b, c);

}

int orderValues(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    if ((*a == *b) == *c) {
        return 1;
    } else {
        return 0;
    }
}
