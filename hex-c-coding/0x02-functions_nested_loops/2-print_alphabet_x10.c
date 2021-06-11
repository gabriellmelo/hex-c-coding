/**
 * print_alphabet_x10 - the function printes the alphabet ten times
 *
 * Return: always 0, success
 */

#include "holberton.h"

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
