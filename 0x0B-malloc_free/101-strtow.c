/**
 * 101-strtow.c
 * Description: Taking a string input, this program will ultimately split the string up such that
 * each word in the given string gets its own line by allocating the required amount of memory for each word
 * In the case where this is not possible, the memory that is already allocated gets freed up
 */

#include "alx.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mem_clear - Frees memory
 * @s: String input for memory deallocation
 * Return: Nothing
 */
void mem_clear(char **s)
{
	int i;

	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}
	free(s);
}

/**
 * word_count - Counts number of indexes in a string
 * @str: String being counted
 * Return: Number of indexes
 */
int word_count(char *str)
{
	int i;
	int wc = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			wc++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				i--;
		}
	}

	return (wc);
}

/**
 * strtow - "Master function": Splits a string such that each word gets its own line
 * @str: String input
 * Return: The pointer to the very first index of the list of words
 */
char **strtow(char *str)
{
  /**
   * Variables
   * @i and @j: for loop counters and holding index placements
   * @input_length: Holds length of the input string
   * @word_size: Holds length of a particular word within the input string
   * @array_row: Integer that keeps track of row index
   * @array_column: Integer that keeps track of column index
   * @new_str: Newly created double pointer and what will be returned at the end
   */
	int i, j = 0;
	int input_length, word_size, array_row = 0, array_column;
	char **new_str = NULL;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	input_length = word_count(str);

	if (!input_length)
		return (NULL);

	new_str = malloc(sizeof(char *) * (input_length + 1));

	if (new_str == NULL)
		return (NULL);

	
	new_str[array_row] = NULL;

	for (i = 0; str[i]; i++)
	{
	  
		if (str[i] == ' ')
			continue;
		
		j = i;
		while (str[j] != '\0' && str[j] != ' ')
			j++;

		word_size = j - i;
		
		new_str[array_row] = malloc((word_size + 1) * sizeof(char));
		
		if (new_str[array_row] == NULL)
		{
			mem_clear(new_str);
			return (NULL);
		}
		
		for (array_column = 0; str[i] && str[i] != ' '; i++, array_column++)
			new_str[array_row][array_column] = str[i];
		new_str[array_row][array_column] = '\0';

		if (!str[i])
			i--;
		
		array_row++;
	}
	return (new_str);
}
