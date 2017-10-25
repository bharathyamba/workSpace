#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void show(struct node *headRef) {
    printf("Stack :: ");
    while (headRef != NULL) {
        printf("%d  ", headRef->data);
        headRef = headRef->next;
    }
    printf("\n");
}

void push(int newData) {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    show(head);
}

void pop() {
    struct node *temp = head;
    if (temp != NULL) {
        head = temp->next;
        free(temp);
        show(head);
        return;
    } else {
        printf("\rStack is empty\n");
    }
}

int main() {
    char choice;
    int e;
    while (1) {
        printf("\n");
        printf("Choose an operation for stack ::\n1-push\n2-pop\nq-quit\n");
        scanf("%c", &choice);
        switch (choice) {
            case '1': {
                printf("enter an element to push :: ");
                scanf("%d", &e);
                push(e);
                break;
            }
            case '2': {
                pop();
                break;
            }
            case 'q': {
                exit(0);
            }
            default:
                break;
        }
    }
}
