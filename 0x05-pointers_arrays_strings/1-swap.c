#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter to swap for b
 * @b: parameter to swap for a
 * Return: void
 */

void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
