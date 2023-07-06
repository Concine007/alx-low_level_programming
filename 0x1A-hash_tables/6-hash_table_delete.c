#include "hash_tables.h"

/**
 * hash_table_delete - De let es  a ha sh ta b l e.
 * @ht: A po in  te r  to a ha sh   ta b l e.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head = ht;
hash_node_t *node, *tmp;
unsigned long int x;

for (x = 0; x < ht->size; x++)
{
if (ht->array[x] != NULL)
{
node = ht->array[x];
while (node != NULL)
{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
}
}
free(head->array);
free(head);
}