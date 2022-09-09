#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase
 * and then uppercase alphabet.
 * Followed by a new line
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

	alp = 'A';

	while (alp <= 'Z')
	{
		putchar(alp);
		alp++;
	}

	putchar('\n');

	return (0);

}
