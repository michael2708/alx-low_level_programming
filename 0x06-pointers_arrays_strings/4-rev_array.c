#include "main.h"

/**
 *reverse_array - reverses an array
 *@a: array to reverse
 *@n: number of arrays to reverse
 *Return: void
 */
void reverse_array(int *a, int n)
{
while (n > 0)
{
printf("%d", a[n]);
if (n != 0)
{
printf(", ");
}
n--;
}
printf("\n");
}
