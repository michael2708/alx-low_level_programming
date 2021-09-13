#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
while (s[i] != '\0') /*iterate through string*/
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
s = &s[i];
return (s);
}
}
i++;
}
return (NULL);
}
