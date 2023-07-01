#include <stdio.h>

int main() {
    /*  0  1  2  3  4
     * ----------------
     * |  |  |  |  |  |
     * ----------------
    */

   int values[5] = {1, 2, 3, 4, 5};
   
   for (int i = 0; i < 5; i++) {
     // byte: 0000 0001
     // 4 bytes: 0000 0000 0000 0001
     printf("The value %d has %ld bytes\n", values[i], sizeof(values[i]));
   }

   return 0;
}