#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 * program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
	char y[84];
	int x = 0, sum = 0, d1, d2;

	srand(time(0));
	while (sum < 2772)
	{
		y[x] = 33 + rand() % 94;
		sum += y[x++];
	}
	y[x] = '\0';
	if (sum != 2772)
	{
		d1 = (sum - 2772) / 2;
		d2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			d1++;
		for (x = 0; y[x]; x++)
		{
			if (y[x] >= (33 + d1))
			{y[x] -= d1;
				break;
			}
		}
		for (x = 0; y[x]; x++)
		{
			if (y[x] >= (33 + d2))
			{
				y[x] -= d2;
				break;
			}
		}
	}
	printf("%s", y);
	return (0);
}
