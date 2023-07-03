#include "main.h"

/**
 * main - print the first 50 fibonacci numbers.
 * Return: Always 0 (success)
 */

int main(void)
{
	int count;
	unsigned long i = 0, j = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = i + j;
		printf("%lu", sum);

		i = j;
		j = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
