#include "main.h"

/**
  * print_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */
void print_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		_putchar(z + '0');
	}

	_putchar('\n');
}
