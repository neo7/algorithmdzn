#include<stdlib.h>
#include <stdio.h>
struct node* buildOneTwoThree();
int length(struct node*);



int main(){
	struct node* myList = buildOneTwoThree();
	int len = length(myList );
	printf("%d", len);

}

struct node {
	int data;
	struct node* next;

};

struct node* buildOneTwoThree(){

	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;


	head = malloc(sizeof (struct node));
	second = malloc(sizeof(struct node));
	third = malloc (sizeof(struct node));

	head -> data = 1;
	head ->next = second;

	second -> data = 2;
	second ->next = third;

	third -> data = 3; 
	third ->next = NULL;

	return head;
}

int length(struct node* head) {
	
	struct node* current = head;
	int count = 0;

	while (current != NULL){
		count ++;
		current = current ->next;
	
	}
	return count;
	
}

