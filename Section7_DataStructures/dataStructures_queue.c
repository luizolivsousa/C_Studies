#include <stdio.h>

/* Queue
 * - First in, first out.
 * - New elements will be put at the end of the queue.
 * - The first element will be the first to be removed. 
 */

#define DIMQUEUE 10

void enQueueElement();
void deQueueElement();
void clearQueue();
void listQueueElements();

int queue[DIMQUEUE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

int main() {
    
    int option = 0;

    do{
        printf("Avaible commands:\n");
        printf("[1] - Insert element: \n");
        printf("[2] - Delete element: \n");
        printf("[3] - List elements: \n");
        printf("[4] - Clear queue: \n");
        printf("[-1] - Exit: \n");
        printf("Option: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            enQueueElement();
            break;
        case 2:
            deQueueElement();
            break;
        case 3:
            listQueueElements();
            break;
        case 4:
            clearQueue();
            break;
        case -1:
            break;
        default:
            printf("Invalid option!");
        }
    } while (option != -1);

    return 0;
}

void enQueueElement(){
    int enValue;
    if (tail < DIMQUEUE){
        printf("Type the element you want to add to the queue: ");
        scanf("%d", &enValue);
        queue[tail] = enValue;
        ++tail;
        listQueueElements();
    } else {
        printf("The queue is currently full...");
    }
}

void deQueueElement(){
    int enValue;
    if (head < tail){
        queue[head] = 0;
        ++head;
        listQueueElements();
    } else {
        printf("The queue is empty...");
    }
}

void clearQueue(){
    for (int i=0; i < DIMQUEUE; i++) {
        queue[i] = 0;
    }
    head = 0;
    tail = 0;
}

void listQueueElements(){
    printf("\n==================CURRENT QUEUE===================\n");
    for (int i=0; i < DIMQUEUE; i++){
        printf("-");
        printf("|%d|", queue[i]);
        printf("-");
    }
    printf("\nQueue head: %d\n", head);
    printf("\nQueue tail: %d\n", tail);
    printf("\n\n");
}



