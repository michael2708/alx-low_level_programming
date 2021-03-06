#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the beginning
 *@head: pointer to the start
 *@n: new node
 *Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;
const int s = n;
new = malloc(sizeof(struct dlistint_s));
if (new == NULL)
{
return (NULL);
}
new->n = s;
if (*head == NULL)
{
*head = new;
new->next = NULL;
new->prev = NULL;
return (new);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
new->next = NULL;
new->prev = tmp;
tmp->next = new;
return (new);
}
