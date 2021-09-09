#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: destination for the second arr
 *@src: array to be concatenated
 *@n: delimiter
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
/* dest[i] = '\0'; */
return (dest);
}
