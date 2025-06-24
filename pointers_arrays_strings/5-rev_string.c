#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	/* Trouver la longueur de la chaîne */
	while (s[i] != '\0')
		i++;

	i--; /* i devient l'index du dernier caractère */

	/* Inverser la chaîne */
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
