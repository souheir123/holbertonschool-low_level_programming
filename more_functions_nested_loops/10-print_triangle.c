#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 *
 * Description: prints a triangle using the character '#'.
 * If size is 0 or less, prints only a new line.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');

		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
