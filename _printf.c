#include "main.h"

/**
 * _printf - prints formated string to stdout
 *
 * @format: the string to be printed
 * @...: variadic parameters
 *
 * Return: The number of characters printed 
 *         excluding null byte.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int ret = 0;  /* will return the number of characters printed by the different functions that we will call*/

	va_list ptr;
	va_start(ptr, format);

	while (format[i] != '\0')
	{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				count++;
			}
			else
			{
				ret = print_char(&i, ptr, format, &count);
				ret = print_string(&i, ptr, format, &count);
				ret = print_percent(&i, format, &count);

				if (ret == -1)
				{
					return (-1);
				}
			}
			i++;
	}
	return (count);
}
