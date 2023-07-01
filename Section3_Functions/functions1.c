#include <stdio.h>

int sum(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

void message() {
    printf("Hello, Luiz!\n");
}

int main() {
    message();
    printf("%d\n", sum(1, 2));
    return 0;
}