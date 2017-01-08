/*
	Using pointers in functions
*/

#include "stdio.h"


void exchange(int * const pint1, int * const pint2)
{
	int tmp;

	tmp = *pint1;
	*pint1 = *pint2;
	*pint2 = tmp;
}





int main(int argc, char const *argv[])
{
	int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;

	printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n",  i1, i2, *p1, *p2);

	exchange(p1, p2);

	printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n",  i1, i2, *p1, *p2);

	exchange(&i1, &i2);

	printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n",  i1, i2, *p1, *p2);	

	return 0;
}