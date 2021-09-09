#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reverses an array
 *@a: array to reverse
 *@n: number of arrays to reverse
 *Return: void
 */
void reverse_array(int *a, int n)
{
int tmp, beg = 0;
int end = n - 1;
while (beg < end)
{
tmp = *(a + beg);
*(a + beg) = *(a + end);
*(a + end) = tmp;
beg++, end--;
}
}
