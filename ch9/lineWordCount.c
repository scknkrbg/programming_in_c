/*
	Counting words
*/

#include "stdio.h"
#include "stdbool.h"

bool alphanumeric(const char c)
{	
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

int countWords(const char str[])
{
	int i = 0; 
	int count = 0;
	bool new_word = true;
	while(str[i] != '\0')
	{
		if(alphanumeric(str[i]))
		{
			if(new_word)
			{
				++count;
				new_word = false;	
			}
		}
		else
			new_word = true;
		// printf("%i. %c %i %d\n", i, (char) str[i], count, (bool) new_word);
		++i;
		
	}
	return count;
}


void readLine(char c[])
{
	char character;
	int i = 0;
	do
	{
		character = getchar();
		c[i] = character;
		++i;
	}
	while(character != '\n');
	c[i - 1] = '\0';
}

int main(int argc, char const *argv[])
{
	
	char text[81];
	bool endOfText = false;
	int wordCount = 0;
	printf("Enter the text : \n");
	printf("When you're done hit RETURN!\n");

	while(!endOfText)
	{
		readLine(text);

		if(text[0] == '\0')
			endOfText = true;
		else
			wordCount += countWords(text);
	}

	printf("%i\n", wordCount);

	return 0;
}