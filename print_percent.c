#include "main.h"

/**
 * print_percent - print prcentage
 * @i: the iterator
 * @format: The string
 * @count: the counter
 * Return: the number of chars
 */
int print_percent(int *i, const char *format, int *count)
{
	if (format[*i + 1] == '%')
	{
		_putchar('%');

		*count = *count + 1;
		*i = *i + 1;
	}
	return (0);
}
