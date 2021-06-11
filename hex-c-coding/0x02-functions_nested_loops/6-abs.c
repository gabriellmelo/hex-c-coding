/**
 * _abs - returns the absolute value of an integer
 *
 * @n: integer value
 *
 * Return: abslute value
 */

#include "holberton.h"

int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}
	else if  (n == 0)
	{
		n = n * 0;
	}
	else
	{
		n = n * (-1);
	}
	return (n);
}
