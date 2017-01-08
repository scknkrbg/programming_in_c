/*
	insertEntry() function with the capability of inserting at the begining.
*/

#include "stdio.h"

struct entry 
{
	int value;
	struct entry *next;
};




void printLinkedList (struct entry *ptr, struct entry *first)
{
	ptr = first -> next;

	while(ptr != 0)
	{
		printf("%i\n", ptr -> value);
		ptr = ptr -> next;
	}
	printf("\n");
}





void insertEntry(struct entry *to_be_inserted, struct entry *previous)
{
	to_be_inserted -> next = previous -> next;
	previous -> next = to_be_inserted;
}






int main(int argc, char const *argv[])
{
	struct entry n0, n1, n2, n3, n2_3, *p1, *p2, *p3, *p2_3, *list_pointer, *first_element;
	
	first_element = &n0;
	p1 = &n1;
	p2 = &n2;
	p3 = &n3;
	p2_3 = &n2_3;

	
	n2_3.value = 250;
	n2_3.next = 0; 

	// n0.value = 111;
	n0.next = &n1;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = 0;

	printLinkedList(list_pointer, first_element);

	// insertEntry(p2_3, p2, p1);

	// printLinkedList(list_pointer, p1);

	insertEntry(p2_3, p3);
	// p1 = p2_3;

	// printf("%i\n", p2_3 -> value);
	// printf("\n");

	printLinkedList(list_pointer, first_element);


	return 0;
}