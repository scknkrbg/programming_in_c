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

bool equalString(const char s1[], const char s2[])
{
	bool equal = true;
	int i = 0;
	while(s1[i] != 0)
		++i;
	if(s1[i] != s2[i] || s2[i] != '\0')
		equal = false;
	return equal;
}

int lenghtDic(const struct dictionary d[])
{
	int count = 0;
	while(d[count].word != " ")
	{
		++count;
		printf("%i\n", count);
	}
	return count;
}


int lookUp(const char search[], const struct dictionary d[], int numOfEntries)
{

	for(int i = 0; i < numOfEntries; ++i)
	{
		if(equalString(search, d[i].word))
			return i;			
	}
	return -1;
}


int main(int argc, char const *argv[])
{
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
        { "ajar",     "partially opened"                  },
        {" ", 		  " "								  } 
	};


	const char s1[] = "seckin";
	const char s2[] = "seckinlklk";

	printf("%d\n", equalString(s1, s2) );
	// printf("lenghtDic is %i \n", lenghtDic(sozluk));
	


	return 0;
}