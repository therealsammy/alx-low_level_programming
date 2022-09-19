#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	/*char map;
	int i, j, n;

	for (j = 0; s[j] != '\0'; j++)
		;

	n = j - 1;

	for (i = 0; i < n / 2; i++)
	{
		map = s[i];
		s[i] = s[n];
		s[n--] = map;
	}*/

	int i, c, l;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
