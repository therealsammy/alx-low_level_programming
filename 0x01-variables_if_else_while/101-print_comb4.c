#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of three different digits
 * Numbers must be separated by commas followed by a space.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use variables of type `char`.
 * Return: 0
 */

int main(void)
{
	int i, n, m;

	for (i = 0; i < 8; i++)
	{
		for (n = i + 1; n < 9; n++)
		{
			for (m = n + 1; m < 10; m++)
			{

				putchar((i % 10) + '0');
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');

				if (i == 7 && n == 8 && m == 9)
				{
					continue;
				}
			putchar(44);
			putchar(32);
			}
		}
	}

	putchar('\n');

	return (0);
}
