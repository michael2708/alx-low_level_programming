#include "main.h"

/**
 *_memcpy - function that copies memory area
 *@dest: destination
 *@src: source
 *@n: limit
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int limit = n;
int i;
for (i = 0; i < limit; i++)
{
dest[i] = src[i];
}
return (dest);
}
