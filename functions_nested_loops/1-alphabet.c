#include "main.h"

/**
 * print_alphabet - imprime l'alphabet en minuscules suivi d'une nouvelle ligne
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
