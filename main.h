#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - structure for functions and their rep
 * @oper: Operator
 * @f: function
 */

struct convert
{
	char *oper;
	int (*f)(va_list);
};
typedef struct convert conv;

int format_c(const char *format, conv func_ls[], va_list arg);
int put_char(char c);
int _printf(const char *format, ...);
int pr_char(va_list);
int pr_str(va_list);
int pr_percent(va_list);
int pr_int(va_list);

#endif
