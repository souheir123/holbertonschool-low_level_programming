#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including \0,
 *           to the buffer pointed to by dest
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; /* don't forget to terminate the string */

	return (dest);
}
