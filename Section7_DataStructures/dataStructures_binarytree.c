#include <stdio.h>
#include <stdlib.h>

/* Binary tree
 * - No elemetens: empty tree
 * - 1 distinct element with two pointers to two different structures called subtrees left and right.
 * */

struct stBinaryTree {
    int value;
    struct stBinaryTree *subTreeRight;
    struct stBinaryTree *subTreeLeft;
};

typedef struct stBinaryTree binaryTree;

binaryTree* createTree() {
    return NULL;
}

int emptyTree(binaryTree* tree) {
    return tree == NULL;
}

void showTree(binaryTree* tree) {
    printf("<");
    if(!emptyTree(tree)) {
        printf("%d ", tree->value);
        showTree(tree->subTreeLeft);
        showTree(tree->subTreeRight);
    }
    printf(">");
}

void insertOnTree(binaryTree** tree, int number) {
    if(*tree == NULL) {
        *tree = (binaryTree *)malloc(sizeof(binaryTree));
        (*tree)->subTreeLeft = NULL; 
        (*tree)->subTreeRight = NULL;
        (*tree)->value = number;
    } else {
        if (number < (*tree)->value) {
            insertOnTree(&(*tree)->subTreeLeft, number);
        }
        if (number > (*tree)->value) {
            insertOnTree(&(*tree)->subTreeRight, number);
        }
    }
}

int isOnTree(binaryTree* tree, int number) {
    if (emptyTree(tree)) {
        return 0;
    }

    return tree->value==number || isOnTree(tree->subTreeLeft, number) || isOnTree(tree->subTreeRight, number);
}

int main() {

    binaryTree* tree = createTree();

    insertOnTree(&tree, 12);
    insertOnTree(&tree, 15);
    insertOnTree(&tree, 10);
    insertOnTree(&tree, 13);

    showTree(tree);

    if (emptyTree(tree)) {
        printf("\n\nThis tree is empty!\n\n");
    } else {
        printf("\n\nThis tree isn't empty!\n\n");
    } 
 
    if (isOnTree(tree, 15)) {
        printf("\nThe element 15 belongs to the tree!\n");
    } else {
        printf("\nThe element 15 does not belong to the tree!\n");
    } 
 
    if (isOnTree(tree, 22)) {
        printf("\nThe element 22 belongs to the tree!\n");
    } else {
        printf("\nThe element 22 does not belong to the tree!\n");
    } 

    free(tree);

    return 0;
}