#include <stdio.h>

int main() {
    double fahrenheit;
    double celsius;

    printf("Temperature in celsius degree: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 9.0/5.0 + 32.0;

    printf("The temperature in Fahrenheit is: %.2lf\n", fahrenheit);

    return 0;
}
