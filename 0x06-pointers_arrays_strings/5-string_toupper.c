#include "main.h"

/**
 * string_toupper - Change lowercase to uppercase
 * @p: The string gets modified
 *
 * Return: char var
*/
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
