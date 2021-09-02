#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on success
 */

int main(void)
{
unsigned long num = 612852475143;
unsigned long di = 2;
while (di < num)
{
if (num % di == 0)
{
num /= di;
di = 2;
}
else
{
di++;
}
}
printf("%lu\n", num);
return (0);
}
