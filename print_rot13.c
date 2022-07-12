#include "main.h"

/**
 * print_rot13 - Entry Point
 * print strings using the rot13
 * @list: list
 * @f: flag pointer
 * Return: length
 */

int print_rot13(va_list list, flags_t *f)
{
	int Cntr1, Cntr2;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = va_arg(list, char *);

	(void)f;

	for (Cntr2 = 0; p[Cntr2]; Cntr2++)
	{
		if (p[Cntr2] < 'A' || (p[Cntr2] > 'Z' && p[Cntr2] < 'a') || p[Cntr2] > 'z')
		{
			put_char(p[Cntr2]);
		}
		else
		{
			for (Cntr1 = 0; Cntr1 <= 52; Cntr1++)
			{
				if (p[Cntr2] == rot13[Cntr1])
				{
					put_char(ROT13[Cntr1]);
				}
			}
		}
	}

	return (Cntr2);
}
