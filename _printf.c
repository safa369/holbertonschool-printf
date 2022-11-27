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
	int len = 0;

	va_start(argm, format);
	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (0);
	while (*format != '\0')
		{
			while (*format != '%')
			{
				_putchar(*format);
				format++;
				len++;
			}
			format++;
			switch(*format)
			{
			case '%': _putchar('%');
				  len++;
				  break;
			case 's':len += print_string(argm);
				 break;
			case 'c':
				 len += print_char(argm);
				 break;
			}
			format++;
		}
		va_end(argm);
return (len);
}
