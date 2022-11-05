#include <stdio.h>
#include <stdlib.h>


/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv[])
{
	int p, tot, ch, a;
	int coins[] = {25, 10, 5, 2, 1};

	p = tot = ch = a = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tot = atoi(argv[1]);
	if (tot <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[p] != '\0')
	{
		if (tot >= coins[p])
		{
			a = (tot / coins[p]);
			ch += a;
			tot -= coins[p] * a;
		}
		p++;
	}
	printf("%d\n", ch);
	return (0);
}
