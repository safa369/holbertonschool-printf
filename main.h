#ifndef print_f
#define print_f
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include<unistd.h>
#include <limits.h>

/**
 * struct printing - structur for compiling function.
 * @prt: structur.
 * @ptr: pointer function;
 */
typedef struct printing
{
	char *prt;
	int (*ptr)(va_list p);
}print_t;
int get_function(int *i,const char *format, va_list argmt);
int _printf(const char *format, ...);
int print_char(va_list p);
int print_string(va_list p);
int _putchar(char c);
int print_integer(va_list argmt);
#endif
