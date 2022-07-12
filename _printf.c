#include "main.h"

/**
 * _printf - prints and formats data
 * @format: items to be printed
 *
 * Return: Integer.
 */

int _printf(const char *format, ...)
{
	int pr_ch;
	conv func_ls[] = {
		{"c", pr_char},
		{"s", pr_str},
		{"%", pr_percent},
		{"d", pr_int},
		{"i", pr_int},
		{NULL, NULL}
	};

	va_list arg;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg, format);
	pr_ch = format_c(format, func_ls, arg);
	va_end(arg);
	return (pr_ch);
}
