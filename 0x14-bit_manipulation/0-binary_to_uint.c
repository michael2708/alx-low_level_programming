#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
int len = 0, pow = 1;
unsigned int sum = 0;
if (b == NULL)
{
return (0);
}
while (b[len] != '\0')
{
len++;
}
len -= 1;
while (len >= 0)
{
if ((b[len] != '0') && (b[len] != '1'))
{
return (0);
}
if (b[len] == '1')
{
sum += pow;
}
pow *= 2;
len--;
}
return (sum);
}
