#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i <= _strlen(src); i++)
{
dest[i] = src[i];
}
return (dest);
}