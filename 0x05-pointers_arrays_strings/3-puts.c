#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line,
 * to stdout.
 * @str: string
 *
 * Return: On success 1.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++;
	}
	_puts('\n');
}
