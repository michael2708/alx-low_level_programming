#include "lists.h"

/**
* sum_dlistint - sum of all the data (n)
* @head: pointer to doubly linked list
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (!head)
{
return (sum);
}
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
