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
	int len = 0;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	while (s[len])
	{
		_putchar(s[len]);
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
	long int n = va_arg(args, int);
	long int num;
	int end = n % 10, unit, digit = 1, len = 1;

	n = n / 10;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		num *= -1;
		end *= -1;
		len++;
	}
	if (n > 0)
	{
		while (num / 10 != 0)
		{
			digit = digit * 10;
			num = num / 10;
		}
		num = n;
		while (digit >= 1)
		{
			unit = num / digit;
			_putchar(unit + '0');
			num = num - (unit * digit);
			digit = digit / 10;
			len++;
		}
	}
	_putchar(end + '0');

	return (len);
}
