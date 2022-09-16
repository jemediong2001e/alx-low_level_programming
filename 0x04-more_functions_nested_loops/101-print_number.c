#include "main.h"
#include <stdio.h>
#include <stdlib.h>

extern int putchar(char c);

/**
 * Print_number - like hello world
 * @n: parameters as integer
 * No return
 */
void print_number(int n)
{
	unsigned int n1 = 0;

	if (n < 0)
	{
		n1 = -n;
		putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	putchar((n1 % 10) + '0');
}
