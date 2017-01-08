/*
	fprint and fscan functions 
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *f;
	char c;

	f = fopen("ismet.txt", "r");

	// c = getc(f);

	char ch[43];

	fgets(ch, 42, f);


	for(int i = 0; i < 43; ++i)
		printf("%c", ch[i]);

	// while((c = getc(f)) != EOF)
	// 	printf("%c", c);	


	// if((f = fopen("ismet.txt", "w")) == NULL)
	// 	printf("file could not be loaded!\n");
	// else
	// {
	// 	fprintf(f, "ismet bu dosyaya noldi?\n");
	// 	while((c = getc(f)) != EOF)
	// 		getc(f);
	// 	fclose(f);
	// }
	
	



	return 0;
}