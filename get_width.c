#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string
 * @i: List of arguments to be print
 * @list: list of argument.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int g;
	int width = 0;

	for (g = *i + 1; format[g] != '\0'; g++)
	{
		if (is_digit(format[g]))
		{
			width *= 10;
			width += format[g] - '0';
		}
		else if (format[g] == '*')
		{
			g++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = g  - 1;

	return (width);
}

