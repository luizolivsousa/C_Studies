#include <stdio.h>

void increment(int* value);

int main() {
    // When a variable is declared, the language selects a space in memory to alocate the value.
    int value = 10;

    //%p is used to print memory and it requires the (void *). Its means the value is cast to a generic pointer
    //  
    printf("Value's value is %d. It's memory address is %d\n", value, &value);
    increment(&value);
    printf("Value's value after incrementing is %d. It's memory address is %d\n",
            value, &value);
}

// Will receive a memory address that points to an integer.
void increment(int* value) {
    // Now everything has the same memory address.
    printf("Functions parameter is %d and it's memory address is %d\n", (*value), value);
    ++(*value);
}