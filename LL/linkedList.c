#include<stdio.h>
#include<stdlib.h>

struct listNode {
    int data;
    struct listNode *next;
};

void traverseList(struct listNode *node) {
    printf("list contains :: ");
    while (node != NULL) {
        printf("%d \t", node->data);
        node = node->next;
    }
}

int insertElementFirst(struct listNode **head_ref, int data) {

    struct listNode *newNode = (struct listNode *) malloc(sizeof(struct listNode));

    newNode->data = data;
    newNode->next = (*head_ref);
    (*head_ref) = newNode;

    // printf("Element inserted\n");
    return 0;
}


int insertElementLast(struct listNode **head_ref, int data) {

    struct listNode *newNode = (struct listNode *) malloc(sizeof(struct listNode));

    struct listNode *last = *head_ref;

    newNode->data = data;
    newNode->next = NULL;

    if (*head_ref == NULL) {
        (*head_ref) = newNode;
        return 0;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
    return 0;
}

void insertElementAfter(struct listNode **head_ref, int data, int pos) {

    struct listNode *prev_node = *head_ref;
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL\n");
        return;
    }
    struct listNode *newNode = (struct listNode *) malloc(sizeof(struct listNode));

    newNode->data = data;
    newNode->next = prev_node->next;

    while (--pos > 0) {
        prev_node = prev_node->next;
    }
    prev_node->next = newNode;
}

int main() {
    struct listNode *head = NULL;
    char a;
    while (1) {
        printf("\nChoose an operation :: \n'1': insertElementAtFirstPos\n'2': insertElementAtLastPos\n'3': insertElementAfter\n'p': Print list\n'q': quit\n\n");
        scanf("%s", &a);
        switch (a) {
            case '1': {
                int element;
                printf("Enter an element to insert :: \t");
                scanf("%d", &element);
                insertElementFirst(&head, element);
                // traverseList(head);
                break;
            }
            case '2': {
                int element;
                printf("Enter an element to insert :: \t");
                scanf("%d", &element);
                insertElementLast(&head, element);
                // traverseList(head);
                break;
            }
            case '3': {
                int element, pos;
                printf("Enter an element to insert and pos:: \t");
                scanf("%d %d", &element, &pos);
                insertElementAfter(&head, element, pos);
                break;
            }

            case 'p': {
                traverseList(head);
                break;
            }
            case 'q':
                exit(0);
            default:
                printf("choose from listed operation\n");
        }
    }
    return 0;
}