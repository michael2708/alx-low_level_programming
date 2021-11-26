#include "lists.h"

/**
 *print_dlistint -  prints all the elements of a dlistint_t list
 *@h: list
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp;
size_t i = 0;
tmp = h;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
i++;
tmp = tmp->next;
}
return (i);
}
