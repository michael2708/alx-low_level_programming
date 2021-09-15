#include "main.h"
/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
int len = _strlen(s);
return (compare(s, (s + len - 1)));
}
