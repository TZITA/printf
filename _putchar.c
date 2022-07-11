#include <unistd.h>

/**
 * _putchar - Entry Point
 * writes character c to stdout
 * @c: character
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
