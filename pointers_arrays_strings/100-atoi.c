#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: String to convert
 *
 * Return: Integer value or 0 if no digits found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, started = 0;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	if (sign < 0 && result > 2147483648)
		return (0); /* out of int range, can be adapted if needed */
	if (sign > 0 && result > 2147483647)
		return (0);

	if (sign < 0)
		return ((int)(-result));
	return ((int)result);
}

