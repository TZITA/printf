#include "main.h"

/**
 * pr_ch - prints character
 * @list: list 
 *
 * Return: Number.
 */

int pr_char(va_list list)
{
	put_char(va_arg(list, int));
	return (1);
}

/**
 * pr_str - print a string
 * @list: list
 *
 * Return: Num.
 */

int pr_str(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		s = "(NULL)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		put_char(s[i]);
	}
	return (i);
}

/**
 * pr_percent - prints a percent symbol
 * @list: list
 *
 * Return: Symbol.
 */

int pr_percent(__attribute__((unused))va_list list)
{
	put_char('%');
	return (1);
}

/**
 * pr_int - prints an integer
 * @list: list
 *
 * Return: Num.
 */

int pr_int(va_list list)
{
	int len_num;

	len_num = pr_int(list);
	return (len_num);
}

