#include "main.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	convert_match m[] =
	{
		{"%s", printf_string}, {"%c", printf_char},
		{"%i", printf_int}, {"%d", printf_dec}, {"%%", printf_37}
		/**
		 * Array 'm' contains different format specifiers and
		 * their corresponding functions to handle each
		 * type of formatting.
		 */
	};
