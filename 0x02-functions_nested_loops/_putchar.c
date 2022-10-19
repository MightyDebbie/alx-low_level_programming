#include "main.h"
#include <unistf.h>

/**
 * _putchar - the character c is written to stdout
 * @c: character to be printed
 *
 * Return: 0n success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
