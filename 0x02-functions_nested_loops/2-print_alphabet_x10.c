#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

	void print_alphabet_x10(void);
	char j, i;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}