#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	/* Find length of string */
	while (s[i] != '\0')
		i--;

	i--;

	/* Swap characters from both ends */
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
