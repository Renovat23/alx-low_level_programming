#include "main.h"


/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */

int _atoi(char *s)
{
	int b = 0;
	unsigned int y = 0;
	int m = 1;
	int i = 0;

	while (s[b])
	{
		if (s[b] == 45)
		{
			m *= -1;
		}
		while (s[b] >= 48 && s[b] <= 57)
		{
			i = 1;
			y = (y * 10) + (s[b] - '0');
			b++;
		}
		if (i == 1)
		{
			break;
		}
		b++;
	}
	y *= m;
	return (y);
}
