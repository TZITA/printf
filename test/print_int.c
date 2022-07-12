#include "main.h"

/**
 * print_int - Entry Point
 * print i
 * @i: i
 * Return: i
 */

int print_int(va_list i)
{
	int length, number, digit;
	int Cntr1 = 0;
	int Cntr2, n, pt;

	n = va_arg(i, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			Cntr1++;
		}
		number = n;
		length = 0;
		while (number != 0)
		{
			num /= 10;
			length++;
		}
		pt = 1;
		for (Cntr2 = 1; Cntr2 <= length - 1; Cntr2++)
		{
			pt *= 10;
		}
		for (Cntr2 = 1; Cntr2 <= length; Cntr2++)
		{
			digit = n / pt;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			Cntr++;
			n -+ digit * pt;
			pt /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
