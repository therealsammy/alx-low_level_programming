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
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{

		putchar((i % 10) + '0');
		putchar((n % 10) + '0');

		if (i == 9 && n == 9)
		{
			continue;
		}
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
