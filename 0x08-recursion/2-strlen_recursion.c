#include "main.h"

/**
 * _strlen_recursion - note: no _putchar in local test
 * @s: input
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
		_puts_recursion(s);
	else
		_putchar('\n');
}
