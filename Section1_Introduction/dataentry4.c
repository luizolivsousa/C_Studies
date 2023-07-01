#include <stdio.h>
#include <string.h>

int main() {
    int readInt;

    int i, j;

    printf("Number to be inverted: ");
    scanf("%d", &readInt);

    char readChar[5];
    char invertedChar[5];

    sprintf(readChar, "%d", readInt);
    
    i = 0;
    j = strlen(readChar) - 1;
    
    while (readChar[j] != '\0') {
        invertedChar[i] = readChar[j];
        i++;
        j--;
    }
    
    invertedChar[i] = '\0';

    printf("%s\n", invertedChar);

    return 0;
}