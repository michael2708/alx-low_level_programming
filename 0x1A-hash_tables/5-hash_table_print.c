#include "hash_tables.h"
/**
 *hash_table_print - function that prints a hash table
 *@ht: hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
char *comma = "";
if (!ht || !ht->array)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
node = ht->array[i];
while (node != NULL)
{
printf("%s'%s': '%s'", comma, ht->array[i]->key, ht->array[i]->value);
comma = ", ";
node = node->next;
}
}
}
printf("}\n");
}
