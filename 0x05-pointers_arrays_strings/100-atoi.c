#include "main.h"

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: void
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	sign = l;
	while (*temp != '\0' && (temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -l;
		temp++;
	}
	if (*temp != '\0')
	{
		do
		{
			num = num * 10 + (*temp - '0');
			temp++;
		}
		while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
