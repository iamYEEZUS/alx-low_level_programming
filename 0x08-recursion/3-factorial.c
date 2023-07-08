#include "alx.h"

/**
 * factorial - check the code for alx students.
 * @n: Inputting value
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
