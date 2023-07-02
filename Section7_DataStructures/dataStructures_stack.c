#include <stdio.h>

/* Stack
 * - First in, last out (FILO).
 * - New elements will be put at the beginning of the queue.
 * - The first element will be the last to be removed. 
 */

#define DIMSTACK 10

void pushElement();
void popElement();
void clearStack();
void listStackElements();

int stack[DIMSTACK] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int top = 0;

int main() {
    
    int option = 0;

    do{
        printf("Avaible commands:\n");
        printf("[1] - Insert element: \n");
        printf("[2] - Delete element: \n");
        printf("[3] - List elements: \n");
        printf("[4] - Clear stack: \n");
        printf("[-1] - Exit: \n");
        printf("Option: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            pushElement();
            break;
        case 2:
            popElement();
            break;
        case 3:
            listStackElements();
            break;
        case 4:
            clearStack();
            break;
        case -1:
            break;
        default:
            printf("Invalid option!");
        }
    } while (option != -1);

    return 0;
}

void pushElement(){
    int pushValue;
    if (top < DIMSTACK){
        printf("Type the element you want to add to the stack: ");
        scanf("%d", &pushValue);
        stack[top] = pushValue;
        ++top;
        listStackElements();
    } else {
        printf("The stack is currently full...");
    }
}

void popElement(){
    if (top >= 0){
        stack[top-1] = 0;
        --top;
        listStackElements();
    } else {
        printf("The stack is empty...");
    }
}

void clearStack(){
    for (int i=0; i < DIMSTACK; i++) {
        stack[i] = 0;
    }
    top = 0;
    listStackElements();
}

void listStackElements(){
    printf("\n=CURRENT STACK=\n");
    for (int i=0; i < DIMSTACK; i++){
        printf("-");
        printf("|%d|", stack[i]);
        printf("-");
    }
    printf("\nStack top: %d\n", top);
    printf("\n\n");
}



