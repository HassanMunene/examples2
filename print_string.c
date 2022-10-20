#include "main.h"
/**
 * print_string - prints string
 * @i: receive the address of the i iterator
 * @ptr: the variadic argument
 * @format: will recieve the address of the format
 * @count: will recieve the address of the count
 *
 * Return: the number of charcters printed
 */
int print_string(int *i, va_list ptr, const char *format, int *count)
{
	if (format[*i + 1] == 's')
	{
		char *s = va_arg(ptr, char *);
		int j = 0;

		if (s == NULL)
		{
			s = "(null)";
		}
		while (s[j] != '\0')
		{
			_putchar(s[j]);
			*count = *count + 1;
			j++;
		}
		*i = *i + 1;
	}
	return (0);
}
