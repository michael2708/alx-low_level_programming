#include "main.h"

/**
 * print_alphabet - entry point
 * Return: 0
 */

void print_alphabet(void)
{
char strt;
strt = 'a';
while (strt <= 'z')
{
_putchar(strt);
strt++;
}
_putchar('\n');
}
