#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */

int _strlen(char *string)
{
int i = 0;
while (string[i] != '\0')
{
i++;
}
return (i);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of first string
 * Return: array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *tre;
int i, j, limit, len;
limit = n;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (limit < 0)
{
return (NULL);
}
if (limit >= _strlen(s2))
{
limit = _strlen(s2);
}
len = _strlen(s1) + limit + 1;
tre = malloc(sizeof(*tre) * len);
if (tre == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
tre[i] = s1[i];
}
for (j = 0; j < limit; j++)
{
tre[i + j] = s2[j];
}
tre[i + j] = '\0';
return (tre);
}
