#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head = NULL;

void listQueue(struct node * headRef){
	printf("Queue :: ");
	while(headRef != NULL) {
		printf("%d  ",headRef->data);
		headRef=headRef->next;
	}
	printf("\n");
}

void enqueue(int data){
	struct node *newNode = (struct node *) malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = head;
	head = newNode;
	listQueue(head);
}

void dequeue(){
	struct node *temp = head;
	struct node *x = NULL;

	if(temp == NULL){
		printf("Queue is Empty\n");
		return;
	}
	if(temp->next == NULL){	
		head = NULL;
		free(temp);
		printf("Queue is Empty now\n");
		return;
	}
	while(temp->next != NULL){
		x = temp;
		temp = temp->next;
	}

	x->next = NULL;
	free(temp);

	listQueue(head);
}

int main(){
	printf("Choose an operation for queue ::\n\t\t1-Enqueue\n\t\t2-Dequeue\n\t\t'q'-quit\n");	
	while(1){
		char choice;
		int e;
		scanf("%c", &choice);	
		switch(choice){
			case '1': {
				printf("enter an element to push :: ");
				scanf("%d",&e);
				enqueue(e);
				break;
			}
			case '2':{
				dequeue();
				break;
			}
			case 'q':{
				exit(0);	
			}
		}
	}	
}