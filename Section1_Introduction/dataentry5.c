#include <stdio.h>
#include <math.h>

int main() {
    double stepHeight;
    double desiredHeight;

    printf("Enter step height: ");
    scanf("%lf", &stepHeight);

    printf("Enter desired height: ");
    scanf("%lf", &desiredHeight);

    double neededSteps = ceil(desiredHeight/stepHeight);

    printf("The user has to climb %.0lf steps\n", neededSteps);

    return 0;
}