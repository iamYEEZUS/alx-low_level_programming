#include <stdio.h>
#include "alx.h"

/**
 * wildcmp - Compares two strings and checks if they can be considered identical,
 *            considering the special character '*'.
 * @s1: The first string.
 * @s2: The second string, which can contain the special character '*'.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && (*s2 == '\0' || *s2 == '*'))
		return (1);

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);

		return (0);
	}

	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

int main(void)
{
	char str1[] = "holberton.c";
	char str2[] = "*.c";
	int result = wildcmp(str1, str2);

	if (result == 1)
		printf("Strings are identical.\n");
	else
		printf("Strings are different.\n");

	return (0);
}
