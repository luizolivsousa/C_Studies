#include <stdio.h>

void increment(int* value);

int main() {
    // When a variable is declared, the language selects a space in memory to alocate the value.
    int value = 10;

    //%p is used to print memory and it requires the (void *). Its means the value is cast to a generic pointer 
    printf("Value's value is %d. It's memory address is %p\n", value, (void *)&value);
    // Since the agument for increment function is an int*, it receives and memory address.
    increment(&value);
    printf("Value's value after incrementing is %d. It's memory address is %p\n",
            value, (void *)&value);
}

// Will receive a pointer to an integer.
void increment(int* value) {
    // Now everything has the same memory address.
    printf("Functions parameter is %d and it's memory address is %p\n", (*value), (void *)value);
    // Dereferencing the pointer, which means accessing it's numeric value.
    ++(*value);
}