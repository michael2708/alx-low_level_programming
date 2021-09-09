#include "main.h"
#include <stdio.h>
/**
 *cap_string - capitalizes all words
 *@s: string to capitalize
 *Return: capitalized string
 */

char *cap_string(char *s)
{
int i = 0;
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 'a' + 'A';
i++;
while (s[i] != '\0') /* iterate through string */
{
if ((s[i] >= 'a' && s[i] <= 'z')
&& (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
|| s[i - 1] == '\n'))
s[i] = s[i] - 'a' + 'A';
i++;
}
return (s);
}
