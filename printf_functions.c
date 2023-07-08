#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            count++;
        }
        else
        {
            i++;
            switch (format[i])
            {
                case 'c':
                {
                    char c = va_arg(args, int); // 'char' argument is promoted to 'int' when passed through '...'
                    write(1, &c, 1);
                    count++;
                    break;
                }
                case 's':
                {
                    char *s = va_arg(args, char *);
                    int j = 0;
                    while (s[j])
                    {
                        write(1, &s[j], 1);
                        count++;
                        j++;
                    }
                    break;
                }
                case '%':
                    write(1, &format[i], 1);
                    count++;
                    break;
            }
        }
    }

    va_end(args);
    return count;
}
