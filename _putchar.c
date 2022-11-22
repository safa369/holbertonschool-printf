#include "main.h"
#include <unistd.h>
/**
 * _putchar - functio that print by characters.
 * @c: character to print it.
 * Return: 1 in success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, & c, 1));
}
