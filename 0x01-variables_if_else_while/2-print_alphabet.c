#include <stdio.h>

/**
 * main - print all the alphabets in lowercase,
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
