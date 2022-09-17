#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: Number of times the line should be drawn
 * Return: A straight line in the terminal
 */

void print_line(int n)
{
	int c;

	for (c = '0'; c <= n; c++)
	{
		if (c < 0 || c == 0)
			_putchar('\n');
		_putchar(95);
	}
	_putchar('\n');
}
