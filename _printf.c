#include "main.h"
/**
 * _printf - printf simulation
 * @format: directives, 0 or more
 *
 * Return: number of printed chars
 */
int _printf(const char *format, ...)
{
	va_list args;

	int p_counter = 0;
	int di;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			p_counter++;
		}
		else
		{
			format++;
			if (*format == 'c' || *format == 's' || *format == '%')
			{
				p_counter += _printf_char_string_percent(args, format);
			}
			else if (*format == 'd' || *format == 'i')
			{
				di = va_arg(args, int);
				p_counter += _printf_integer(di);
			}
		}
		format++;
	}

	va_end(args);
	return (p_counter);
}
