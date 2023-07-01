#include <stdio.h>

void increment(int value);

int main() {
    // When a variable is declared, the language selects a space in memory to alocate the value.
    int value = 10;

    printf("Value value is %d. It's memory address is %d\n", value, &value);
    increment(value);
    printf("Value value after incrementing is %d. It's memory address is %d\n",
            value, &value);
}

void increment(int value) {
    // This valuable has a different memory address than the value in the main funcion.
    printf("Functions parameter is %d and it's memory address is %d\n", value, &value);
    ++value;
}