#include "hash_tables.h"
/**
 *hash_table_get - function that retrieves a value associated with a key
 *@ht: hash table
 *@key: key searching for
 *Return: value associated with the element or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;
if (ht == NULL || key == NULL)
{
return (NULL);
}
index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
{
return (NULL);
}
node = ht->array[index];
while (node != 0)
{
if (strcmp(node->key, key) == 0)
{
return (node->value);
}
node = node->next;
}
return (NULL);
}
