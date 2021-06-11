/**
 * jack_bauer - returns each minute of 24 hours
 *
 * Return: void
 */

#include "holberton.h"

void hr_1(void);
void hr_2(void);

void jack_bauer(void)
{
hr_1();
hr_2();
}

/**
 * hr_1 - returns each minute for the first 20hrs
 *
 * @hr_1 digit
 */

void hr_1(void)
{
	int hh, h, m, s;

	for (hh = 48; hh < 50; hh++)
	{
		h = 48;
		for (h = 48; h < 58; h++)
		{
			m = 48;
			for (m = 48; m < 54; m++)
			{
				s = 48;
				for (s = 48; s < 58; s++)
				{
					_putchar(hh);
					_putchar(h);
					_putchar(58);
					_putchar(m);
					_putchar(s);
					_putchar('\n');
				}
			}
		}
	}
}

/**
 * hr_2 - returns each minute from 20 to 24hrs
 *
 * @hr_2 digit
 */

void hr_2(void)
{
	int h, m, s;

	for (h = 48; h < 52; h++)
	{
		m = 48;
		for (; m < 54; m++)
		{
			s = 48;
			for (; s < 58; s++)
			{
				_putchar(50);
				_putchar(h);
				_putchar(58);
				_putchar(m);
				_putchar(s);
				_putchar('\n');
			}
		}
	}
}
