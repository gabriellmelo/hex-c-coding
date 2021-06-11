/**
 * print_last_digit - returns the last digit
 *
 * @n: integer
 *
 * Return: the last digit of a given number
 */

#include "holberton.h"

int print_last_digit(int n)
{
	char c;

	if (n < 0)
	{
		n = ((n + 1) * -1);
		n = ((n % 10) + 1);
	}
	else
	{
		n = (n % 10);
	}

	c = (n + '0');
	_putchar(c);
	return (n);
}
