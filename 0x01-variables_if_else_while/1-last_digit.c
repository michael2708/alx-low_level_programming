#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int f;
srand(time(0));
n = rand() - RAND_MAX / 2;
f = n % 10;
printf("Last digit of ");
printf("%d", n);
printf(" is %d ", f);
if (f > 5)
{
printf("and is greater than 5\n");
}
else if (f == 0)
{
printf("and is 0\n");
}
else if (f < 6)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
