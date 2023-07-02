#include <stdio.h>

/* Queue
 * - First in, first out.
 * - New elements will be put at the end of the queue.
 * - The first element will be the first to be removed. 
 */

#define DIMQUEUE 10

void listQueueElements();
void enQueueElement();

int queue[DIMQUEUE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

int main() {
    listQueueElements();
    return 0;
}

void enQueueElement(){
    int enValue;
    if (tail < DIMQUEUE){
        printf("Type the element you want to add to the queue: ");
        scanf("%d", &enValue);
        queue[0] = enValue;
        ++tail;
        listQueueElements();
    } else {
        printf("The queue is currently full...");
    }
}


void listQueueElements(){
    printf("==================CURRENT QUEUE===================\n");
    for (int i=0; i < DIMQUEUE; i++){
        printf("-");
        printf("|%d|", queue[i]);
        printf("-");
    }
    printf("\nQueue head: %d\n", head);
    printf("\nQueue tail: %d\n", tail);
    printf("\n\n");
}



