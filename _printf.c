#include "main.h"

/**
 * _printf - selects the correct function to print
 * @format: format identifier to look for
 *
 * Return: num of characters printed
 */

int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%i", printf_int}, {"%d", printf_int}, {"%%", printf_37}
	};

	va_list args;
	int i = 0, ii, len = 0;

	va_start(args, format);
	if (format == NULL ||
		(format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		ii = 4;
		while (ii >= 0)
		{
			if (m[ii].id[0] == format[i] &&
				m[ii].id[1] == format[i + 1])
			{
				len += m[ii].f(args);
				i = i + 2;
				goto Here;
			}
			ii--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
