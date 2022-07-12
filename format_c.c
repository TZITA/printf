#include "main.h"

/**
 * format_c - prints a  formated string
 * @format: string
 * @func_ls: functions
 * @arg: arguments
 *
 * Return: Num.
 */

int format_c(const char *format, conv func_ls[], va_list arg)
{
	int i;
	int j;
	int val;
	int pr_ch;

	pr_ch = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[1] == '%')
		{
			for (j = 0; func_ls[j].oper != NULL; j++)
			{
				if (format[i + 1] == func_ls[j].oper[0])
				{
					val = func_ls[j].f(arg);
					if (val == -1)
					{
						return (-1);
					}
					pr_ch = pr_ch + val;
					break;
				}
			}
			if (func_ls[j].oper == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					put_char(format[i]);
					put_char(format[i + 1]);
					pr_ch = pr_ch + 2;
				}
				else
				{
					return (-1);
				}
			}
			i = i + 1;
		}
		else
		{
			put_char(format[i]);
			pr_ch++;
		}
	}
	return (pr_ch);
}
