#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: Number of times the line should be drawn
 * Return: A straight line in the terminal
 */

void print_line(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
