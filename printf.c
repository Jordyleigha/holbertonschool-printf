#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints a provided string plus a list of variadic arguments
 * @format: the provided string with format specifiers
 *
 * Return: the number of characters in the string
 */
<<<<<<< HEAD

int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);
    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                char c = va_arg(args, int);
                putchar(c);
                count++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char*);
                while (*str != '\0')
                {
                    putchar(*str);
                    str++;
                    count++;
                }
            }
            else if (*format == '%')
            {
                putchar('%');
                count++;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }
    va_end(args);
    return count;
}

int print_string(va_list ap)
{
	char *str = va_arg(ap, char*);
	int len = 0;
	int i;

	if (str != NULL)
=======
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	va_start(args, format);

	while (*format != '\0')
>>>>>>> 04b5de23cb95a287af5cfb4335e609c9780687cb
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
		{
<<<<<<< HEAD
			putchar(str[i]);
		}
	}
	else
	{
		str = "(null)";
		len = 6;
		for (i = 0; i < len; i++)
=======
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);
				putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				while (*str != '\0')
				{
					putchar(*str);
					str++;
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
		}
		else
>>>>>>> 04b5de23cb95a287af5cfb4335e609c9780687cb
		{
			putchar(str[i]);
		}
	}
<<<<<<< HEAD
	return (len);
=======
	va_end(args);
	return count;
>>>>>>> 04b5de23cb95a287af5cfb4335e609c9780687cb
}
