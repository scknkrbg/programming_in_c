/*
	Sorting a dictionary into alphabetical order.
*/


#include "stdio.h"
#include "stdbool.h"


struct entry 
{
	char word[50];
	char definition[50];
};

// bool compareString(char x, char y)
// {
// 	bool bigger;
// 	int i;
// 	while(x[i] != '\0' || y[i] != '\0')
// 	{
// 		if(x[i] > y[i])

// 	}

	
// }

int countEntry(struct entry d[])
{
	int i = 0;
	int count = 0;
	while (d[i].word[0] != '\0')
		++i;

	return i;
}


void dictionarySort (struct entry dic[], int numberOfEntries)
{
	int i, j;

	for(int i = 0; i < numberOfEntries - 1; ++i)
	{
		for(int j = i + 1; j < numberOfEntries; ++j)
		{
			int t = 0;
			while (dic[i].word[t] != '\0' || dic[j].word[t] != '\0')
			{
				if(dic[i].word[t] > dic[j].word[t])
				{
					char temp[50];
					char temp2[50];
					int count;

				
					for(count = 0; dic[j].word[count] != '\0'; ++count)
						temp[count] = dic[j].word[count];
					temp[count] = '\0';

					for(count = 0; dic[j].definition[count] != '\0'; ++count)
						temp2[count] = dic[j].definition[count];
					temp2[count] = '\0';


					for(count = 0; dic[i].word[count] != '\0'; ++count)
						dic[j].word[count] = dic[i].word[count];
					dic[j].word[count] = '\0';

					for(count = 0; dic[i].definition[count] != '\0'; ++count)
						dic[j].definition[count] = dic[i].definition[count];
					dic[j].definition[count] = '\0';


					for(count = 0; temp[count] != '\0'; ++count)
						dic[i].word[count] = temp[count];
					dic[i].word[count] = '\0';

					for(count = 0; temp2[count] != '\0'; ++count)
						dic[i].definition[count] = temp2[count];
					dic[i].definition[count] = '\0';
					break;
				}
				else
					break;
				++t;
			}
		}
	}
}



int main(int argc, char const *argv[])
{
	struct entry dictionary[100] = 
	{
		{"ismet","sadem"},
		{"osman","seker"},
		{"mumin","cocuk"},
		{"mahmut","ekrem"},
		{"ismet","baki"},
		{"\0", "badem"}
	};

	int dict_number = countEntry(dictionary);
	// printf("Entry number = %i \n", dict_number);

	// dictionary[0].word[0] = 'v';


	dictionarySort(dictionary, dict_number);

	for(int i = 0; dictionary[i].word[0] != '\0'; ++i)
	{
		printf("%s : %s\n", dictionary[i].word, dictionary[i].definition);
	}


	return 0;
}








