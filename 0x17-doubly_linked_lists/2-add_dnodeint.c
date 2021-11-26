#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning
 *@head: pointer to the start
 *@n: new node
 *Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
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
new->next = *head;
new->prev = NULL;
(*head)->prev = new;
*head = new;
return (new);
}
