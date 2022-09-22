#include "main.h"

/**
 * cap_string - capitalize all words of a strin
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, n, control;
	char separator[] = ",;.!?(){}\n\t\" ";

	for (i = 0, control = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			control = 1;
		}

		for (n = 0; separator[n] != '\0'; n++)
		{
			if (separator[n] == str[i])
			{
				control = 1;
			}
		}

		if (control)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				control = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				control = 0;
			}
			else if (str[i] > 47 && str[i] < 58)
			{
				control = 0;
			}
		}
	}
	return (str);

}
