#include "main.h"

/**
 * _printf - selects the correct function to print
 * @format: format identifier to look for
 *
 * Return: num of characters printed
 */

int _printf(const char *format, ...)
{
	convert_match m[] =
	{
		{"%s", printf_string}, {"%c", printf_char},
		{"%i", printf_int}, {"%d", printf_int}, {"%%", printf_37}
		/**
		 * Array 'm' containing structures that define different
		 * format specifiers that our function will handle.
		 * Each contain a pointer to the format specifier string
		 * and a pointer to the function that will be called to
		 * print the value of the arg.
		 */
	};

	va_list args;
	int i = 0, ii, len = 0;
	/**
	 * 'args' to handle the variable num of args given
	 * variables given to help iterate throughout the
	 * format string and args
	 */

	va_start(args, format);
	if (format == NULL ||
		(format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	/**
	 * Return: -1 if format string is NULL or
	 * if it only contains a single % character.
	 */

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
		/**
		 * Loop to iterate throughout the format
		 * string one character at a time.
		 * Checks if the character is a format specifier (1 of 5):
		 * 	if yes - call the appropriate func
		 * 	if no - print character to stdout
		 */
	}
	va_end(args);
	return (len);
	/**
	 * clean up the variable arg list
	 * Return: num of characters printed
	 */
}
