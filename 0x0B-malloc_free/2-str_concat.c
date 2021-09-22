#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first array
 * @s2: second array
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
char *new;
int s1_len = 0, s2_len = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (*(s1 + i))
{
i++, s1_len++;
}
while (*(s2 + j))
{
j++, s2_len++;
}
s2_len++;
new = malloc(sizeof(char) * (s1_len + s2_len));
if (new == NULL)
{
return (NULL);
}
i = 0, j = 0;
while (i < s1_len)
{
*(new + i) = *(s1 + i);
i++;
}
j = 0;
while (j < s2_len)
{
*(new + i) = *(s2 + j);
i++, j++;
}
return (new);
}
