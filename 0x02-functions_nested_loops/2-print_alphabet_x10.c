#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 *
 * main - prints out alphabet 10times in lowercase
 *
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	char i;
	int j;
	j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
			_putchar('\n');
		j++;
	}
}
