#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: is a pointer type char
 * @src: is a pointer type char
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
int k, l;
for (k = 0; *dest != 0; k++)
dest++;

for (l = 0; src[1] != 0; l++)
{
*dest = src[1];
dest++;
}
*dest = '\0';
dest -= (k + l);

return (dest);
}
