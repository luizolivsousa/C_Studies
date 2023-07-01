#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter a name: ");
    scanf("%s", name);

    printf("Enter an age: ");
    scanf("%d", &age);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}