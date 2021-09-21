#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: array
 * Return: duplicate array
 */
char *_strdup(char *str)
{
char *dup;
int i = 0;
int count = 0;
if (str == NULL)
{
return (NULL);
}
while (*(str + i))
{
i++;
count++;
}
dup = malloc(sizeof(char) * count);
if (dup == NULL)
{
return (NULL);
}
for (i = 0; i <= count; i++)
{
*(dup + i) = *(str + i);
}
*(dup + i + 1) = '\0';
return (dup);
}
