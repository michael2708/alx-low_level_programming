#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array
 * @size: size
 * @c: char to assign
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
char *str;
int i, s;
s = size;
if (s == 0)
{
return (NULL);
}
str = malloc(sizeof(char) * s);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i <= s; i++)
{
*(str + i) = c;
}
*(str + i) = '\0';
return (str);
}
