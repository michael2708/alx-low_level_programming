#include "lists.h"

/**
 *free_dlistint - frees list
 *@head: pointer to the start
 */
void free_dlistint(dlistint_t *head)
{
if (!head)
{
return;
}
while (head->next != NULL)
{
head = head->next;
free(head->prev);
}
free(head);
}
