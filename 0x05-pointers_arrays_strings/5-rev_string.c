#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char map;
	int i, j, n;

	for (j = 0; s[j] != '\0'; j++)
		;

	n = j - 1;

	for (i = 0; i < n / 2; i++)
	{
		map = s[i];
		s[i] = s[n];
		s[n--] = map;
	}
}
