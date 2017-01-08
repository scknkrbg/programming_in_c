/*
	Simple dictionary
*/
#include "stdio.h"
#include "stdbool.h"


struct dictionary
{
	char word[15];
	char definition[50];
};

int compareString(const char s1[], const char s2[])
{
	int i, answer; 
	while(s1[i] == s2[i] && s1[i] != '\0' && s1[i] != '\0')
		++i;
	if(s1[i] < s2[i])
		answer = -1;
	else if(s1[i] > s2[i])
		answer = 1;
	else
		answer = 0;

	return answer;
}




int lookUp(const char search[], const struct dictionary d[], int numOfEntries)
{
	int low = 0;
	int high = numOfEntries - 1;
	int mid, comparison;


	while(low <= high)
	{
		mid = (low + high) / 2;
		comparison = compareString(search, d[mid].word);
		
		if(comparison == 1)
			low = mid + 1;
		else if(comparison == -1)
			high = mid - 1;
		else
			return mid;

	}
	return -1;
}


int main(int argc, char const *argv[])
{
	int entry;
	int numOfEntries = 10;
	char str[81];

	const struct dictionary sozluk[100] = 
	{
		{ "aardvark", "a burrowing African mammal"        },
        { "abyss",    "a bottomless pit"                  },
        { "acumen",   "mentally sharp; keen"              },
        { "addle",    "to become confused"                },
        { "aerie",    "a high nest"                       },
        { "affix",    "to append; attach"                 },
        { "agar",     "a jelly made from seaweed"         },
        { "ahoy",     "a nautical call of greeting"       },
        { "aigrette", "an ornamental cluster of feathers" },
        { "ajar",     "partially opened"                  }
	};
	
	printf("Enter the word :\n");
	scanf("%80s", str);

	entry = lookUp(str, sozluk, numOfEntries);

	if(entry != -1)
		printf("%s =  %s\n", str, sozluk[entry].definition);
	else
		printf("%s is not found in the dictionary.\n", str);



	return 0;
}