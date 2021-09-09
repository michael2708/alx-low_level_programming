#include "main.h"

/**
 *_strncpy - function that copies a string
 *@dest: destination
 *@src: source
 *@n: delimiter
 *Return: new string
 */
char *_strncpy(char *dest, char *src, int n)
{
int z = 0;
int i = 0;
int j;
while (dest[z] != '\0')
{
z++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
z--;
}
dest[z + 1] = '\0';
return (dest);
}
