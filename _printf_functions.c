#include "main.h"
/**
 * _printf_char_string_percent - Handles %c, %s, and %% format specifiers
 * @args: Arguments list
 * @format: Format specifier character (c, s, or %)
 *
 * Return: Number of characters printed
 */
int _printf_char_string_percent(va_list args, const char *format)
{
	int p_counter = 0;
	int c;
	char *s;

	if (*format == 'c')
	{
		c = va_arg(args, int);
		write(1, &c, 1);
		p_counter++;
	}
	else if (*format == 's')
	{
		s = va_arg(args, char *);

		if (s == NULL)
		{
			write(1, "(null)", 6);
			p_counter += 6;
		}
		else
		{
			while (*s)
			{
				write(1, s, 1);
				s++;
				p_counter++;
			}
		}
	}
	else if (*format == '%')
	{
		write(1, "%", 1);
		p_counter++;
	}
	return (p_counter);
}
/**
 * _printf_integer - Helper function to print integers
 * and handle d and i
 * @di: The integer to print
 *
 * Return: Number of characters printed
 */
int _printf_integer(int di)
{
	int p_counter = 0, counter;
	int tmpo, di_counter;
	char buffer[12];

	di_counter = 0;

	if (di < 0)
	{
		write(1, "-", 1);
		p_counter++;
		di = -di;
	}

	tmpo = di;

	do {
		tmpo /= 10;
		di_counter++;
	} while (tmpo != 0);

	for (counter = di_counter - 1; counter >= 0; counter--)
	{
		buffer[counter] = di % 10 + '0';
		di /= 10;
	}

	write(1, buffer, di_counter);
	p_counter += di_counter;

	return (p_counter);
}
