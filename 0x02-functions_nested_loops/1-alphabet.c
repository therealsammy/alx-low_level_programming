#include "main.h"

/**
 * print_alphabet - print all the alphabet
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}

	_putchar('\n');

}
