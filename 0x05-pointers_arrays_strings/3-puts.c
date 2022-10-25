#include "main.h"

/**
 * _puts - print a string, then followed by a new line
 * @str: input string
 * Return: 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
