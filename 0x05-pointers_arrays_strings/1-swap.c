#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
