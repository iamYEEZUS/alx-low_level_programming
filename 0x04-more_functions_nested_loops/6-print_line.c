#include "main.h"

/**
  * print_line - Draws a straight line according to parameter
  * @n: The number of lines to draw
  *
  * Return: empty
  */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
