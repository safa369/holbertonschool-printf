#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_string - function print a string.
 * @argm: variable of type va_list.
 * Return: the numbers of charactters printed..
 */
int print_string(va_list argm)
{
	int i = 0;
	char *s;

	s = va_arg (argm, char *);
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
 * @argm: variable of type va_list.
 * Return: integer the numbers of char printed.
 */
int print_char(va_list argm)
{
	char h;

	h = va_arg(argm, int);
	_putchar(h);
	return (1);
}
/**
 * get_function - function that call the necessery function.
 * @c: const char.
 * @p: va_list.
 * Return: the number of character.
 */
int get_function(const char c, va_list p)
{
	int j ;
	switch (c)
	{
		case 's':
			j = print_string(p);
			return (j);	
		case 'c':
			j = print_char(p);
			return (1);
		case '%':
			_putchar('%');
			return(1);
	}
	return(0);
}
