/*
Student name: Dhruv Patel
Program: llist.c
*/
/* 
 TOPIC:    simple linked list implementation
 PURPOSE:  Simple data structures
 */

/**************************************************************************/
/* Declare include files
 **************************************************************************/
#include "llist.h"
#include <stdbool.h>

/**************************************************************************/
/* Provided functions
 **************************************************************************/

/**************************************************************************/
/* llist_push:  Add an element to the head of the list
 **************************************************************************/
int llist_push(node_t **headRef, int data) {

	node_t *new;

	if ((new = (node_t*) malloc(sizeof(node_t))) == NULL)
		return EXIT_FAILURE;

	new->data = data;
	new->next = *headRef;
	*headRef = new;

	return 0;

}
/**************************************************************************/
/* llist_pop:   Removes first element of the list
 **************************************************************************/
void llist_pop(node_t **headRef) {

	node_t *h = *headRef;

	if (h == NULL)
		return;

	*headRef = h->next;
	free(h);

	return;
}
/**************************************************************************/
/* llist_size:  Returns number of elements in the list
 **************************************************************************/
int llist_size(node_t *head) {
	int cnt = 0;

	struct node *tmp = head;

	while (tmp != NULL) {
		cnt++;
		tmp = tmp->next;
	}
	return cnt;

}
/**************************************************************************/
/* llist_print:   Prints a list
 **************************************************************************/
void llist_print(node_t *head) {

	int nodes = 0;
	struct node *current = head;

	fprintf( stdout, "{ ");
	while (current != NULL) {
		fprintf( stdout, "%4d -->", current->data);
		nodes++;
		current = current->next;
	}
	fprintf( stdout, " NULL }\n");

	fprintf(stdout, "Number of elements in the list: %d\n", nodes);

	return;

}

/**************************************************************************/
/* Functions to be implemented by you
 **************************************************************************/
int llist_contains(node_t *h, int value) {
	node_t *current = h;
	while (current != NULL) {
		if (current->data == value) {
			return 1;
		}
		current = current->next;
	}
	return 0;
}

int llist_count(node_t *h, int value) {
	node_t *current = h;
	int count = 0;
	while (current != NULL) {
		if (current->data == value) {
			count++;
		}
		current = current->next;
	}
	return count;
}

int llist_find(node_t *h, int value) {
	node_t *current = h;
	int count = 0;
	while (current != NULL) {
		if (current->data == value) {
			return count;
		}
		count++;
		current = current->next;
	}
	return -1;
}

int llist_addlast(node_t **href, int value) {
	if (*href == NULL) {
		*href = (node_t*) malloc(sizeof(node_t));
		(*href)->data = value;
		(*href)->next = NULL;
	} else {
		node_t *current = *href;
		while (current->next != NULL) {
			current = current->next;
		}

		if ((current->next = (node_t*) malloc(sizeof(node_t))) == NULL)
			return EXIT_FAILURE;

		current->next->data = value;
		current->next->next = NULL;
	}
	return 0;
}

void llist_remove(node_t **href, int value) {
	node_t *current = *href;
	node_t *temp = *href;

	if (*href == NULL) {
		return;
	}


	if (current->data == value) {
		current = current->next;
		free(*href);
		*href = current;
		return;
	}

	while (current != NULL) {
		if (current->next->data == value) {
			temp = current->next->next;
			free(current->next);
			current->next = temp;
			return;
		}
		current = current->next;
	}
}

void llist_free(node_t **href) {
	node_t *current = *href;

	while (*href != NULL) {
		current = (*href)->next;
		free(*href);
		*href = current;
	}
}

