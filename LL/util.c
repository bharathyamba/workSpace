#include "stdio.h"
#include "stdlib.h"

struct Node {
    int data;
    struct Node *next;
};

void traverseList(struct Node *node) {
    printf("list contains ::  ");
    while (node != NULL) {
        printf("%d  ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    *head_ref = new_node;
    printf("After Inserting %d \n", new_data);
    traverseList(*head_ref);
}

void insertAfter(struct Node *prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL\n");
        return;
    }
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    printf("After Inserting %d \n", new_data);
    traverseList(prev_node);
}

void append(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    struct Node *last = *head_ref;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    printf("After Inserting %d \n", new_data);
    traverseList(*head_ref);
}

