#include "main.h"

/**
 * print_alphabet - uses the _putchar function to print
 *                  the alphabet a - z
 * Return: void
 */

void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
