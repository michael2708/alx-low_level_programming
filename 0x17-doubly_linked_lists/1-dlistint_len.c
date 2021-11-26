#include "lists.h"

/**
 *dlistint_len - returns the number of elements
 *@h: list
 *Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp = h;
size_t i = 0;
while (tmp != NULL)
{
i++;
tmp = tmp->next;
}
return (i);
}
