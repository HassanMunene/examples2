#include "main.h"

/**
 * _printf - this function prints the formated string
 *
 * @format:
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0;  /* this will be used to loop through the different formats*/
	int count = 0; /* will be used to hold the number of characters printed*/
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
				ret = print_string(&i, ptr, format, &count);
				ret = print_char(&i, ptr, format, &count);
				ret = ptr_digits(&i, ptr, format, &count);
				ret = print_percent(&i, format, &count);
				ret = print_unsigned_digits(&i, ptr, format, &count);
				ret = print_binary(&i, ptr, format, &count);
				ret = print_hex(&i, ptr, format, &count);
				ret = print_octal(&i, ptr, format, &count);
				ret = print_ptr(&i, ptr, format, &count);

				if (ret == -1)
				{
					return (-1);
				}
			}
			i++;
	}
	return (count);
}
