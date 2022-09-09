#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print all the letters
 * of the alphabet except 'e' and 'q'
 * Return: 0
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}

		alp++;

	}

	putchar('\n');

	return (0);

}
