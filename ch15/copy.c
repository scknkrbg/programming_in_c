/*
	Copying one file into another.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *in, *out;
	int c;
	char inName[64], outName[64];

	printf("Enter the name of the file to be copied from:\n");
	scanf("%63s", inName);

	printf("Enter the name of the file to be copied in:\n");
	scanf("%63s", outName);

	if((in = fopen(inName, "r")) == NULL)
	{
		printf("file: %s could not be loaded!\n", inName);
		return 1;
	}

	if((out = fopen(outName, "w")) == NULL)
	{
		printf("file: %s could not be loaded!\n", outName);
		return 2;
	}

	while ((c = getc(in)) != EOF)
		putc(c, out);

	fclose(in);
	fclose(out);

	printf("%s has been copied into %s\n", inName, outName);

	return 0;
}