#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;
	int i, j;
	char *concatenated;

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1; /* +1 for the newline character */
	}

	concatenated = malloc(sizeof(char) * (total_length + 1)); /* +1 for the null terminator */

	if (concatenated == NULL)
		return (NULL);

	/* Concatenate the arguments into the new string */
	int index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[index++] = av[i][j];
		}
		concatenated[index++] = '\n';
	}

	concatenated[index] = '\0'; /* Add the null terminator at the end */

	return (concatenated);
}
