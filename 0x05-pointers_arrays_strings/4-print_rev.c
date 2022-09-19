#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i, j, n;

	for (i = 0; s[i] != '\0'; i++)
		;

	n = i;

	for (j = n - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}
