#include "main.h"

/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
 */

char *leet(char *str)
{
	int i = 0, j;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[i])
	{
		for (j = 0; j < 10; j++)
			if (str[i] == str[j])
				str[i] = subs[j];

		i++;
	}

	return (str);
}
