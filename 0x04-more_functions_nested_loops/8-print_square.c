#include "main.h"
#include <stdio.h>
/**
 * Print_square - Print square line dependent on the integer n
 * @n: the number of the lines using '#' characters to use oer row and column
 * Return: Void
 */
void print_square(int n)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			putchar('#');
		}
		putchar('\n');
	}

	if (n <= 0)
	{
		putchar('\n');
	}
}
