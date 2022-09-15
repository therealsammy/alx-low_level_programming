#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * using _putchar
 * can only use _putchar twice
 *
 * @i: variable to be incremented
 *
 * Return: 0 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	
	_putchar('\n');
}
