#include "holberton.h"
/**
 * _printf - prints int, char, string, float
 * @format: string to print
 * Return: int value with string length
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0, ret = 0;

	va_list(list);
	va_start(list, format);
	for (i = 0; format != '\0' && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			 ret = find(&format[i + 1], list);
			 if (ret != 0)
			 {
				 len = len + ret;
				 i = i + 1;
			 }
			 else
			 {
				 print_char(format[i]);
				 len++;
			 }

		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			print_char(format[i]);
			len++;
			i++;
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
