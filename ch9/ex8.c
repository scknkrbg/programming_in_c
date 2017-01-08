/*
	Replacing a target string with a given string
*/

#include "stdio.h"
#include "stdbool.h"


const char source2[] = "do what you want do what you want";
const char old[] = "what";
const char new[] = "vat!";

char source [50];

void converToString (const char string[])
{
	int i = 0;
	while(string[i] != '\0')
	{
		source[i] = string[i];
		++i;
	}
	source[i] = '\0';
}

// char convertToArray(const char source[])
// {
// 	char result [50];
// 	int i = 0;
// 	while(source[i] != '\0')
// 	{
// 		result[i] = source[i];
// 		++i;
// 	}
// 	result[i] = '\0';
// 	return result;
// }

int old_index[50];
char removed_string[50];
char inserted_string[50];

int lenghtOfString (const char string[])
{
	int i = 0;
	while(string[i] != '\0')
		++i;
	return i;
}

int lenghtOfInt(int index[])
{
	int i = 0;
	while(index[i] != -1)
		++i;
	return i;
}


void findString(const char source[], const char search[])
{
	
// Finds the search string in the source string and stores the index no's in 
// old_index character array.

	int count = lenghtOfString(search);
	printf("lenght = %i\n", count);
	
	int i = 0;
	int t = 0;

	while(source[i] != '\0')
	{
		bool equal = true;

		if(source[i] == search[0])
		{
			for(int j = 0; j < count; ++j)
			{
				// printf("i = %i, j = %i, ", i, j );
				if(source[i + j] != search[j])
				{
					equal = false;
					// break;
				}
				// printf("equal = %d\n", equal);
			}
			if(equal == true)
			{
				old_index[t] = i;
				++t;
			}	
		}
		++i;
	}

	old_index[t] = -1;

	// i = 0;
	// while(old_index[i] !=  -1)
	// {
	// 	printf("%i ", old_index[i]);
	// 	++i;
	// }
	// printf("\n");

}








void removeString(char source[], int start, int count)
{
	int i = 0, j = 0;

	while(source[i] != '\0')
	{
		if(i < start || i > start + count - 1)
		{
			removed_string[j] = source[i];
			++j;
		}
		++i;
	}
	removed_string[j] = '\0';

	i = 0;
	while(removed_string[i] != '\0')
	{
		printf("%c", removed_string[i]);
		++i;
	}
	printf("\n");
}


void insertString(char source[], const char ins[], int start)
{
	int count = lenghtOfString(ins);
	int count_original = lenghtOfString(source);
	int i = 0;
	
	// printf("%i \n", count);
	while(i < count_original + count)
	{
		if(i < start)
			inserted_string[i] = source[i];
		else if(i > start + count - 1)
			inserted_string[i] = source[i - count];
		else
			inserted_string[i] = ins[i - start];
		// printf("i = %i, %c\n", i, inserted_string[i]);
		++i;
	}

	inserted_string[i] = '\0';

	i = 0;
	while(inserted_string[i] != '\0')
	{
		printf("%c", inserted_string[i]);
		++i;
	}
	printf("\n");

}




void replaceString(char source[], const char old[], const char new[])
{
	findString(source, old);
	int count_found = lenghtOfInt(old_index);
	int lenght_target_string = lenghtOfString(old);

	int i = 0;
	if(count_found == 0)
		printf("Not found!\n");
	else
		while(old_index[i] != -1)
		{
			removeString(source, old_index[i], lenght_target_string);
			++i;
		}


}	



int main(int argc, char const *argv[])
{

	findString(source2, old);
	removeString(source2, old_index[0], lenghtOfString(old));
	insertString(removed_string, new, old_index[0]);
	// replaceString(source, old, new);

	// int i = 0;
	// while(eben[i] !=  '\0')
	// {
	// 	printf("%c", eben[i]);
	// 	++i;
	// }
	// printf("\n");
	return 0;
}



