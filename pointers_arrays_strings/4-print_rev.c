#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	/* Find the length of the string */
	while (s[i] != '\0')
		i++;

	/* Print characters in reverse order */
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
