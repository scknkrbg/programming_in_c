/*
	Returning a pointer from function
*/

#include "stdio.h"

struct entry 
{
	int value;
	struct entry *next;
};


struct entry *findEntry(struct entry *list_pointer, int search)
{
	while(list_pointer != (struct entry *) 0)
	{
		if(list_pointer -> value == search)
			return list_pointer;
		else
			list_pointer = list_pointer -> next;
	}

	return (struct entry *) 0;
}


int main(int argc, char const *argv[])
{
	struct entry n1, n2, n3;
	struct entry *list_pointer, *list_starter = &n1;

	int search;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = (struct entry *) 0;

	printf("Enter the number :\n");
	scanf("%i", &search);

	list_pointer = findEntry(list_starter, search);

	if(list_pointer != 0)
		printf("%i is located? = %i\n", search, list_pointer -> value);
	else
		printf("Not found!\n");
	return 0;
}


