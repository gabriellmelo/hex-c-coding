/**
 * print_alphabet - a function that prints the alphabet in lower case
 *
 * Return: void
 */

#include "holberton.h"

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
