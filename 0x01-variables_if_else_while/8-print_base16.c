#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print all  the
 * hexaecimal numbers.
 * Followed by a new line
 * Return: 0
 */

int main(void)
{
	int i;
	char alp;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	alp = 'a';

	while (alp < 'g')
	{
		putchar(alp);
		alp++;
	}

	putchar('\n');

	return (0);

}
