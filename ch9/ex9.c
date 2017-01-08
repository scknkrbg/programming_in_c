/*
	Replacing a target string with a given string
*/

#include "stdio.h"
#include "stdbool.h"


const char source[] = "do what you want do what you want";
const char old[] = " ";
const char new[] = "";



char new_source[50];
char removed_string [50];
char inserted_string[50];



void convertToArray (const char string[])
{
	int i = 0;
	while(string[i] != '\0')
	{
		new_source[i] = string[i];
		++i;
	}
	new_source[i] = '\0';
}




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




int findString(char source[], const char search[])
{
	
// Finds the search string in the source string and stores the index no's in 
// old_index character array.

	int count = lenghtOfString(search);
	// printf("lenght = %i\n", count);
	
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
				return i;
				break;
				// old_index[t] = i;
				// ++t;
			}	
		}
		++i;
	}

	// old_index[t] = -1;

	// i = 0;
	// while(old_index[i] !=  -1)
	// {
	// 	printf("%i ", old_index[i]);
	// 	++i;
	// }
	// printf("\n");
	return -1;
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

	// i = 0;
	// while(removed_string[i] != '\0')
	// {
	// 	printf("%c", removed_string[i]);
	// 	++i;
	// }
	// printf("\n");
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

	// i = 0;
	// while(inserted_string[i] != '\0')
	// {
	// 	printf("%c", inserted_string[i]);
	// 	++i;
	// }
	// printf("\n");
}




bool replaceString(char source[], const char old[], const char new[])
{
	bool finding;

	int index = findString(new_source, old);
	removeString(new_source, index, lenghtOfString(old));
	insertString(removed_string, new, index);

	int i = 0;
	while (inserted_string[i] != '\0')
	{
		new_source[i] = inserted_string[i];
		printf("%c", new_source[i]);
		++i;
	}
	printf("\n");
	new_source[i] = '\0';

	if(findString(new_source, old) > 0)
	{
		return true;
	}
	else
		return false;
	
	return -1;
}	



int main(int argc, char const *argv[])
{

	convertToArray(source); // source string converted into new_source array.
	
	bool finding;

	// printf("%i\n", findString(new_source, old));
	do
	{
		finding = replaceString(new_source, old, new);
	}
	while(finding);

	return 0;
}



