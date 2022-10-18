#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: The number
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
		a *= -1;

	_putchar(a + '0');

	return (a);
}
