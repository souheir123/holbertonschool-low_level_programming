#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
	int i = 0, len = 0, start;

	/* Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* If odd, start = (len + 1) / 2 */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}

	/* Print from start to end */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
