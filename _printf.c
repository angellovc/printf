#include "holberton.h"
/**
 * _printf - prints int, char, string, float
 * @format: string to print
 * Return: int value with string length
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;

	va_list(list);
	va_start(list, format);
	for (i = 0; format != '\0' && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			len = len + find(&format[i + 1], list);
			i = i + 1;
		}
		else
		{
			print_char(format[i]);
			len++;
		}
	}
	va_end(list);
	return (len);
}
