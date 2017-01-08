/*
	Doubly linked list which is connected to both preceding and next elements.
*/


#include "stdio.h"

struct entry 
{
	int value;
	struct entry *next;
	struct entry *preceding;
};


int main(int argc, char const *argv[])
{
	struct entry n0, n1, n2, n3, *first_element, *p1, *p2, *p3, *list_pointer;

	first_element = &n0;
	n0.next = &n1;
	n0.preceding = 0;

	n1.value = 100;
	n1.next = &n2;
	n1.preceding = &n0;

	n2.value = 200;
	n2.next = &n3;
	n2.preceding = &n1;

	n3.value = 300;
	n3.next = 0;
	n3.preceding = &n2;

	list_pointer = first_element -> next;

	while(list_pointer != 0)
	{	
		printf("%i\n", list_pointer -> value);
		list_pointer = list_pointer -> next;
	}

	printf("\n");

	list_pointer =  &n3;

	while(list_pointer != &n0)
	{	
		printf("%i\n", list_pointer -> value);
		list_pointer = list_pointer -> preceding;
	}

	return 0;
}