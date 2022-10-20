#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * printed number
 * Return: Always 0
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	return (0);
}
