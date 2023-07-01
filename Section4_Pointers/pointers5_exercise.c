#include <stdio.h>

int main() {
    int num1 = 10;
    double num2 = 20.57;
    char str1 = 'S';

    int* p1;
    double* p2;
    char* p3;

    p1 = &num1;
    p2 = &num2;
    p3 = &str1;

    //Passing the value of the pointers as arguments.
    printf("%d, %.2lf, %c\n", *p1, *p2, *p3);

    //Acessing the values and changing them.
    *p1 = 55;
    *p2 = 66.84;
    *p3 = 'A';

    printf("%d, %.2lf, %c\n", *p1, *p2, *p3);

    return 0;
}