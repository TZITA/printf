#include "main.h"
#include <stdio.h>

int checker(int, char);

/**
 * pr_bi - converts a number to base 2
 * @list: list
 *
 * Return: Num.
 */

int pr_bi(va_list list)
{
	unsigned int n;
	int i;
	int len;
	char *s;
	char *rev_string;

	n = va_arg(list, unsigned int);
	if (n == 0)
	{
		return (put_char('0'));
	}
	if (n < 1)
	{
		return (-1);
	}
	len = b_len(n, 2);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
	{
		return (-1);
	}
	for (i = 0; n > 0; i++)
	{
		if (n % 2 == 0)
		{
			s[i] = '0';
		}
		else
		{
			s[i] = '1';
		}
		n = n / 2;
	}
	s[i] = '\0';
	rev_string = rev_str(s);
	if (rev_string == NULL)
	{
		return (-1);
	}
	put_base(rev_string);
	free(s);
	free(rev_string);
	return (len);
}

/**
 * pr_oct - prints numeric rep of a num in octal
 * @list: list
 *
 * Return: Num.
 */

int pr_oct(va_list list)
{
	unsigned int n;
	int len;
	char *oct;
	char *rev_string;

	n = va_arg(list, unsigned int);
	if (n == 0)
	{
		return (put_char('0'));
	}
	if (n < 1)
	{
		return (-1);
	}
	len = b_len(n, 8);
	oct = malloc(sizeof(char) * len + 1);
	if (oct == NULL)
	{
		return (-1);
	}
	for (len = 0; n > 0; len++)
	{
		oct[len] = (n % 8) + 48;
		n = n / 8;
	}
	oct[len] = '\0';
	rev_string = rev_str(oct);
	if (rev_string == NULL)
	{
		return (-1);
	}
	put_base(rev_string);
	free(oct);
	free(rev_string);
	return (len);
}

/**
 * pr_he_x - prints a hexadecimal rep of a num
 * @list: list
 *
 * Return: Num.
 */

int pr_he_x(va_list list)
{
	unsigned int n;
	int len;
	int x_num;
	char *hex;
	char *rev_hex;

	n = va_arg(list, unsigned int);
	if (n == 0)
	{
		return (put_char('0'));
	}
	if (n < 1)
	{
		return (-1);
	}
	len = b_len(n, 16);
	hex = malloc(sizeof(char) * len + 1);
	
	if (hex == NULL)
	{
		return (-1);
	}
	for (len = 0; len > 0; len++)
	{
		x_num = n % 16;
		if (x_num > 9)
		{
			x_num = checker(x_num, 'x');
			hex[len] = x_num;
		}
		else
		{
			hex[len] = x_num + 48;
		}
		n = n / 16;
	}
	hex[len] = '\0';
	rev_hex = rev_str(hex);
	if (rev_hex == NULL)
	{
		return (-1);
	}
	put_base(rev_hex);
	free(hex);
	free(rev_hex);
	return (len);
}

/**
 * pr_he_X - prints a hexadecimal rep of a num
 * @list: list
 *
 * Return: Num.
 */
int pr_he_X(va_list list)
{
	unsigned int n;
	int len;
	int x_num;
	char *hex;
	char *rev_hex;

	n = va_arg(list, unsigned int);
	if (n == 0)
	{
		return (put_char('0'));
	}
	if (n < 1)
	{
		return (-1);
	}
	len = b_len(n, 16);
	hex = malloc(sizeof(char) * len + 1);
	if (hex == NULL)
	{
		return (-1);
	}
	for (len = 0; n > 0; len++)
	{
		x_num = n % 16;
		if (x_num > 9)
		{
			x_num = checker(x_num, 'X');
			hex[len] = x_num;
		}
		else
		{
			hex[len] = x_num + 48;
		}
		n = n / 16;
	}
	hex[len] = '\0';
	rev_hex = rev_str(hex);
	if (rev_hex == NULL)
	{
		return (-1);
	}
	put_base(rev_hex);
	free(hex);
	free(rev_hex);
	return (len);
}

/**
 * checker - checks
 * @num: number
 * @x: hex functions
 *
 * Return: Val.
 */

int checker(int num, char x)
{
	char *hex_z = "abcdef";
	char *Hex_z = "ABCDEF";

	num = num - 10;
	if (x == 'x')
	{
		return (hex_z[num]);
	}
	else
	{
		return (Hex_z[num]);
	}
	return (0);
}
