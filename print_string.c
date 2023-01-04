#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_string - function print a string.
 * @p: the argument pointer.
 * Return: the numbers of charactters printed.
 */
int print_string(va_list p)
{
	char *s;
	int i = 0;

	s = va_arg(p, char *);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	return (i);
}
/**
 * print_char - function print char.
 * @p: the argument pointer.
 * Return: return always 1.
 */
int print_char(va_list p)
{
	int h;

	h = (char)va_arg(p, int);
	_putchar(h);
	return (1);
}
/**
 * print_percent - function thar print a %.
 * @p: the argument pointer.
 * Return: always 1.
*/
int print_percent(va_list __attribute__((unused)) p)
{
	_putchar('%');
	return (1);
}
