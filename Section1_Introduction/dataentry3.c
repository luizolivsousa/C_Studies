#include <stdio.h>

int main() {
    double amount = 780000;
    double firstPercentage = 0.46;
    double secondPercentage = 0.32;

    double firstAmount = amount*firstPercentage;
    double secondAmount = amount*secondPercentage;
    double thirdAmount = amount*(1-firstPercentage-secondPercentage);

    printf("The prize values are:\n$%.2lf for the first place\n$%.2lf for the second place\n$%.2lf for the last place!\n",
            firstAmount, secondAmount, thirdAmount);

    return 0;
}