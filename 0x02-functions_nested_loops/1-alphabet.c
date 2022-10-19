#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, then a new line follows.
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
