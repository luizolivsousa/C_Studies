#include <stdio.h>

int main() {
    /*  0  1  2  3  4
     * ----------------
     * |  |  |  |  |  |
     * ----------------
    */

   int values[5];

   for (int i = 0; i < 5; i++) {
        printf("Insert a value for position %d: ", (i+1));
        scanf("%d", &values[i]);
   }
   
   printf("The given values were: \n");
   for (int i = 0; i < 5; i++) {
        printf("%d %p\n", values[i], &values[i]);
   }

   //The address of the array is the address of it's first element.
   printf("The array's address is %p\n", &values);

   return 0;
}