#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - function printing.
 * @format: const char.
 * Return: integer the numbers of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list argm;
	int len, i;

	va_start(argm, format);
	if (format == NULL)
		return (0);
	i = len = 0;
	while (format[i] != '\0')
		{
			while (format[i] != '%')
			{
				_putchar(format[i]);
				i++;
				len++;
			}
			i++;
			if(format[i] == '%')
				{
					_putchar('%');
					i++;
				}
			else
				len += get_function(format[i], argm);
			i++;
		}
		va_end(argm);
return (len);
}
