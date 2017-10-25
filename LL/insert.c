#include "util.c"

int main() {
    struct Node *head = NULL;
    push(&head, 3);
    append(&head, 1);
    insertAfter(head, 2);
    push(&head, 4);
    push(&head, 5);
    append(&head, 0);
}