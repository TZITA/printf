#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

#define BUFFER_SIZE 1024

/**
 * struct modifier - Entry Point
 * modifier fields
 * @flag: flag fields
 * @precision: precision 
 * @length: length
 * @width: width
 * @specifier: specifier
 */

typedef struct modifier
{
	char *flags;
	int precision;
	char *length;
	int width;
	char specifier;
} modifier_t;


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
int pr_num(va_list);
int pr_bi(va_list);
int pr_rev(va_list);
int rot13(va_list);
int unsig_int(va_list);
int pr_oct(va_list list);
int pr_he_x(va_list list);
int pr_he_X(va_list list);
unsigned int b_len(unsigned int, int);
char *rev_str(char *);
void put_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int pr_unsig_num(unsigned int);
char *print_char (modifier_t *modif, va_list list);

#endif
