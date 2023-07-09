#include "main.h"

/**
 * printf_char - prints a character
 * @val: the argument list passed in.
 *
 * Return: 1, the character length.
 */
int printf_char(va_list val)
{
	char s = va_arg(val, int);

	_putchar(s);
	return (1);
}

/**
 * printf_string - prints a string as arg to the printf
 * @val: the argument list passed in.
 *
 * Return: the length of the string.
 */
int printf_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "NULL";
		for (i = 0; s[i] == '\0'; i++)
		{
			_putchar(s[i]);
			len++;
		}
		return (0);
	}
	else
	for (i = 0; s[i] == '\0'; i++)
	{
		_putchar(s[i]);
		len++;
	}
	return (len);
}

/**
 * printf_37 - prints the % character
 *
 * Return: 1, which is the length of %;
 */
int printf_37(void)
{
	_putchar('%');
	return (1);
}

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int len = 0, exp = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
		len++;
	}
	else
	while (n / exp > 9)
		exp *= 10;
	while (exp != 0)
	{
		_putchar(n / exp);
		n %= exp;
		exp /= 10;
		len++;
	}
	return (len);
}
