#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int ch;
int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
