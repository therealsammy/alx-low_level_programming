#include <stdio.h>

/**
 * main - write all the digits in base 10
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');

	return (0);
}
