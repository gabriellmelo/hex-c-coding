/**
 * _isalpha - is a function that tests if a character is a letter
 * and if it's lower or uppercase
 *
 * @c: is integer
 *
 * Return: 1 if success and 0 otherwise
 */

#include "holberton.h"

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
