#include "main.h"
/**
 * get_function - function that call the necessery function.
 * @c: const char.
 * @p: va_list.
 * @argmt: the variable to print.
 * Return: the number of character.
 */
int get_function(int *i, const char *format, va_list argmt)
{print_t list[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	
int val = *i;
int j = 0, l = 0, count = 0;

	while (j < 4)
	 {
		if (*(list[j].prt) == *(format + 1))
	 	{
			count += list[j].ptr(argmt);
			*i += 1;
	 	}
	 	else 
	 	{
			l++;
	 	}
        j++;
	 }
	 if (l == 4)
	 {
		_putchar(format[val]);
		count++;
	 }
	 return (count);
}