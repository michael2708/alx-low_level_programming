#include "main.h"

/**
 * _strlen - gives the lenght
 * rev_string - reverses a string
 *@s: string to be reversed
 * Return: void
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
int i = 0;
int j = (_strlen(s) - 1);
char p;
while (i < j)
{
p = s[i];
s[i] = s[j];
s[j] = p;
i++;
j--;
}
}
