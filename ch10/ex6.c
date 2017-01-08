/*
	insertEntry() and removeEntry() functions for doubly linked lists
*/

#include "stdio.h"

struct entry 
{
	int value;
	struct entry *next;
	struct entry *previous;
};



void printList(struct entry *pointer, struct entry *first_element)
{
	pointer = first_element -> next;

	while(pointer != 0)
	{
		printf("%i\n", pointer -> value);
		pointer = pointer -> next;
	}
	printf("\n");
}

void insertEntry(struct entry *to_be_inserted, struct entry *previous)
{
	to_be_inserted -> next = previous -> next;
	previous -> next = to_be_inserted;
}

void removeEntry(struct entry *to_be_removed)
{
	(to_be_removed -> previous) -> next = to_be_removed -> next;
	to_be_removed -> next = (struct entry *)0;
}



int main(int argc, char const *argv[])
{
	struct entry n0, n1, n2, n2_3, n3, *p1, *p2, *p3, *first_element, *last_element, *to_be_inserted;

	p1 = &n1;
	p2 = &n2;
	p3 = &n3;

	first_element = &n0;
	n0.next = &n1;
	n0.previous = 0;

	n1.value = 100;
	n1.next = &n2;
	n1.previous = &n0;

	n2.value = 200;
	n2.next = &n3;
	n2.previous = &n1;

	to_be_inserted = &n2_3;
	n2_3.value = 250;
	n2_3.next = 0;
	n2_3.previous = 0;

	last_element = &n3;
	n3.value = 300;
	n3.next = 0;
	n3.previous = &n2;

	printList(first_element, first_element);

	insertEntry(to_be_inserted, p3);

	printList(first_element, first_element);

	removeEntry(p1);

	printList(first_element, first_element);

	return 0;
}