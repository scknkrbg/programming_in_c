#include "stdio.h"

void sum2(int *x, int *y)
{
	*x = *y;
}

int main(int argc, char const *argv[])
{
	int x = 10, *px = &x;
	int y = 20, *py = &y;

	sum2(px, py);
	printf("%i\n", *px);



	return 0;
}