#include "main.h"

/**
 * _isupper - check if letter is uppercase
 * @x: the number checked
 * Return: 1 if letter is uppercase and 0 if not
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
