#include "main.h"
#include <stddef.h>
/**
 *_strchr - unction that locates a character in a string
 *@s: string
 *@c: character
 *Return: pointer
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (*(s + i) != '\0' && *(s + i) != c)
{
i++;
}
if (*(s + i) == c)
{
return (s + i);
}
else
{
return (NULL);
}
}
