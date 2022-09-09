#include <stdio.h>
/**
 * main - main block
 * Description: Print numbers from 0 to 99.
 * Numbers must be separated by commas followed by a space.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use variables of type `char`.
 * Return: 0
 */

int main(void)
{
	int i, n, m;

	for (i = 0; i < 100; i++)
	{
		n = i / 10;
		m = i % 10;


		putchar(n + '0');
		putchar(m + '0');

		if (i < 99)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
