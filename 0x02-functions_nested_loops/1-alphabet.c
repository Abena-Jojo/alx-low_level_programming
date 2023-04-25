#include "main.h"

/**
 * print_alphabet - Make the alphabet
 * Return: void
 */

int print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'g'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
