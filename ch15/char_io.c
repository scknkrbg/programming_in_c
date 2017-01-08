/*
	character i/o ops with getchar() and putchar()
*/

#include <stdio.h>

int main(void)
{
	char c;		

	c = getchar();
	printf("%c", c);
	

	// printf("deneme : %c\n", c[0]);

	return 0;
}