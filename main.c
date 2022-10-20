#include <stdio.h>
int _printf(const char *format, ...);

int main(void)
{
	int count;
	int len;
	int len2;

	count = _printf("My name is hassan\n");
	len = _printf("Let's try to printf a simple sentence.\n");
	    len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", count);
	printf("%d %d \n", len, len2);
	_printf("my name is %c\n", 'e');
	return (0);
}
