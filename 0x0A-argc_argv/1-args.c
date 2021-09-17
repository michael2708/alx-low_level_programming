#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* @argc: argument count
* @argv: array vector
* Return: Always (0) Success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
