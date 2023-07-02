#include <stdio.h>
#include <stdlib.h>

/* Linked List
 * - Has a value and a pointers that points to the next value of the list.
 * - Receives values at the start or at the end of the list.
 */

//A knot is an important part of the linked list. 
struct stKnot {
    int value;
    struct stKnot *nextKnot;    
};

typedef struct stKnot knot;

int isListEmpty(knot *linkedlist);
void initializeList(knot *linkedlist);
void freeList(knot *linkedlist);
void showList(knot *linkedlist);
void insertAtHead(knot *linkedlist);
void insertAtTail(knot *linkedlist);
void optionSelected(knot *linkedlist, int option);
int menuList();

int main() {
    knot *linkedlist = (knot *)malloc(sizeof(knot));
    
    if (!linkedlist) {
        printf("No memory avaible...");
        exit(1);
    }

    initializeList(linkedlist);
    int option;

    do {
        option = menuList();
        optionSelected(linkedlist, option);
    } while (option);
    
    free(linkedlist);

    return 0;
}

int isListEmpty(knot *linkedlist) {
    // Check if the nextKnot pointer is NULL
    // When linkedlist->nextKnot, you are accessing the member nextKnot of the structure pointed to by linkedlist.
    if(linkedlist->nextKnot == NULL) {
        return 1; 
    } else {
        return 0;
    }
}

void initializeList(knot *linkedlist) {
    linkedlist->nextKnot = NULL;
}

void freeList(knot *linkedlist) {
    if (!isListEmpty(linkedlist)) {
        knot *currentKnot, *nextNextKnot;
        currentKnot = linkedlist->nextKnot;
        while (currentKnot != NULL) {
            nextNextKnot = currentKnot->nextKnot;
            free(currentKnot);
            currentKnot = nextNextKnot;
        }
        
    }
}

void showList(knot *linkedlist) {
    if(isListEmpty(linkedlist)) {
        printf("The list is currently empty...\n\n");
    }
    knot *temporaryKnot;
    temporaryKnot = linkedlist->nextKnot;

    while (temporaryKnot != NULL) {
        printf("-|%d|-", temporaryKnot->value);
        temporaryKnot = temporaryKnot->nextKnot;
    }
    
}

void insertAtHead(knot *linkedlist){
    knot *newKnot = (knot *)malloc(sizeof(knot));
    if (!newKnot) {
        printf("No memory avaible for allocation...");
        exit(1);
    }
    printf("Value to insert at head: ");
    scanf("%d", &newKnot->value);

    knot *previousHeadKnot = linkedlist->nextKnot;

    linkedlist->nextKnot = newKnot;
    newKnot->nextKnot = previousHeadKnot;

    showList(linkedlist);
}

void insertAtTail(knot *linkedlist) {
    knot *newKnot = (knot *)malloc(sizeof(knot));
    
    if (!newKnot) {
        printf("No memory avaible for allocation...");
        exit(1);
    }
    
    printf("Value to insert at tail: ");
    scanf("%d", &newKnot->value);

    newKnot->nextKnot = NULL;

    if (isListEmpty(linkedlist)) {
        linkedlist->nextKnot = newKnot;
    } else {
        knot *temporaryKnot = linkedlist->nextKnot;

        while (temporaryKnot->nextKnot != NULL) {
            temporaryKnot = temporaryKnot->nextKnot;
        }

        temporaryKnot->nextKnot = newKnot;
    }

    showList(linkedlist);
}

void optionSelected(knot *linkedlist, int option) {
    switch (option) {
        case 1:
            freeList(linkedlist);
            break;
        case 2:
            showList(linkedlist);
            break;
        case 3:
            insertAtHead(linkedlist);
            break;
        case 4:
            insertAtTail(linkedlist);
            break;
        case 5:
            initializeList(linkedlist);
            break;
        default:
            printf("Invalid option!");
    }
}

int menuList() {
    int option;
    
    printf("\nAvaible commands:\n");
    printf("[1] - Exit list. \n");
    printf("[2] - Show list. \n");
    printf("[3] - Insert at head. \n");
    printf("[4] - Insert at tail. \n");
    printf("[5] - Zero out. \n");
    printf("Option: ");
    scanf("%d", &option);

    return option;
}