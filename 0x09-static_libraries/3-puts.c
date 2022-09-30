#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts - print string reverse
 * @str: points to string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
