#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string
 */

char *cap_string(char *str)
{
	int i, j;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
			{
				*(str + i) = *(str + i) - 32;
			}
			else
			{
				for (j = 0 ; j <= 12 ; j++)
				{
					if (a[j] == *(str + i - 1))
					{
						*(str + i) = *(str + i) - 32;
					}
				}
			}
		}
	i++;
	}
	return (str);
