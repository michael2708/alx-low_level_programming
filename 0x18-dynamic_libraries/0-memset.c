#include "main.h"

/**
 *_memset - function that fills memory with a constant byte
 *@s: pointer to array
 *@b: constant byte
 *@n: nth memory area
 *Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
int limit = n;
int i;
for (i = 0; i < limit; i++)
{
s[i] = b;
}
return (s);
}
