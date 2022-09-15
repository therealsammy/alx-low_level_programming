#include "main.h"

/**
 * _isdigit - check if letter is uppercase
 * @x: the number checked
 * Return: 1 if letter is uppercase and 0 if not
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
