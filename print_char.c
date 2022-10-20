#include "main.h"
/**
 * print_char -
 * @i: will receive the address of the i iterator
 * @ptr: the variadic argument
 * @format: will recieve the address of the format
 * @count: will recieve the address of the count
 *
 * Return: the number of charcters printed
 */
int print_char(int *i, va_list ptr, const char *format, int *count)
{
	if (format[*i + 1] == 'c')
	{
		char c = va_arg(ptr, int);

		if (c == 0)
		{
			return (-1);
		}
		_putchar(c);
		*count = *count + 1;
		*i = *i + 1;
	}
	return (0);
}
