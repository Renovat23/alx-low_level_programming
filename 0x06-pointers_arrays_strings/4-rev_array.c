#include "main.h"

/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int x, b;

	for (x = 0; (x < (n - 1) / 2); x++)
	{
		b = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = b;
	}
}
