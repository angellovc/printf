#include "holberton.h"
/**
 *print_double - call a recursion function with an iterator
 *@n: number to print
 *Return: lenght of the number
 */
int print_double(long int n)
{
	int i = 1;

	return (recursion_double(n, i));
}
/**
 *recursion_double - print
 *@n: receive a number
 *@cont: count the lenght of number
 *Return: Amount of digits of the number n
 */
int recursion_double(long int n, int cont)
{
	unsigned long int num;

	if (n < 0)
	{
		print_char(45);
		num = (-1) * n;
		cont++;
	}
	else
		num = n;

	if (num / 10)
	{
		cont = recursion_double(num / 10, cont = cont + 1);
	}
	print_char((num % 10) + '0');
	return (cont);
}
