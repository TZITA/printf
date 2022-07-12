#include "main.h"

/**
 * flag_t - entry point
 * @c: char
 * @f: pointer
 *
 * Return: Num.
 */

int flag_t(char c, flags *f)
{
	int i = 0;

	switch (c)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
