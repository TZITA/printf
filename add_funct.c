#include "main.h"
#include <stdio.h>

/**
 * rev_str - entry
 * @s: string
 *
 * Return: Pointer.
 */

char *rev_str(char *s)
{
	int len;
	int h;
	int t;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	_memcpy(dest, s, len);
	for (h = 0; h < len; h++, len--)
	{
		t = dest[len - 1];
		dest[len - 1] = dest[h];
		dest[h] = t;
	}
	return (dest);
}

/**
 * put_base - entry
 * @str: str
 *
 * Return: Nothing.
 */
void put_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		put_char(str[i]);
	}
}

/**
 * b_len - entry
 * @num: number
 * @base: base
 *
 * Return: Int.
 */

unsigned int b_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * _memcpy - entry
 * @dest: destinationa
 * @src: source
 * @n: number
 *
 * Return: Pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}



