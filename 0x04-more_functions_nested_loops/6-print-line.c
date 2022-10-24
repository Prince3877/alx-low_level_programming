#include "main.h"

/**
 * print_line - a function that draws a staright line in the terminal
 * @n: input number of times to print '_'
 * Return: a staright line
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
