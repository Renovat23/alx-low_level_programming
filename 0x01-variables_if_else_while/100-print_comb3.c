#include <stdio.h>
/**
 * main - Entry points
 * Return: Always 0
 */
int main(void)
{
	int a;

	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
		printf("%d%d", a, b);
		if (b < 9)
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
