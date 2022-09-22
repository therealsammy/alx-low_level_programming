#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, n;
	int control;
	char separators[] = ",;.!?(){}\n\t\" ";

	for (i = 0, control = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			control = 1;
		}

		for (n = 0; separators[n] != '\0'; n++)
		{
			if (separators[n] == str[i])
			{
				control = 1;
			}
		}

		if (control)
		{
			if str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				control = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				control = 1;
			}
			else if (str[i] > 47 && str[i] < 58)
			{
				control = 0;
			}
		}
	}

	return (str);
}
