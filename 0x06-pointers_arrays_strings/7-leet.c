#include "main.h"
#include <stdio.h>

/**
 *leet - encodes a string into 1337
 *@s: array to encode
 *Return: encoded array
 */

char *leet(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == 'a' || s[i] == 'A')
{
s[i] = '4';
}
if (s[i] == 'e' || s[i] == 'E')
{
s[i] = '3';
}
if (s[i] == 'o' || s[i] == 'O')
{
s[i] = '0';
}
if (s[i] == 't' || s[i] == 'T')
{
s[i] = '7';
}
if (s[i] == 'l' || s[i] == 'L')
{
s[i] = '1';
}
i++;
}
s[i] = '\0';
return (s);
}
