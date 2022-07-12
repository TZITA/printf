#include "main.h"

/**
 * pr_rev - entry point
 * @arg: arguments
 *
 * Return: Char.
 */

int pr_rev(va_list arg)
{
	int len;
	char *str;
	char *p;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		return (-1);
	}
	p = rev_str(str);
	if (p == NULL)
	{
		return (-1);
	}
	for (len = 0; p[len] != '\0'; len++)
	{
		put_char(p[len]);
	}
	free(p);
	return (len);
}

/**
 * rot13 - entry point
 * @list: list
 *
 * Return: Str.
 */

int rot13(va_list list)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
	{
		return (-1);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				put_char(u[x]);
				break;
			}
		}
		if (x == 53)
		{
			put_char(str[i]);
		}
	}
	return (i);
}
