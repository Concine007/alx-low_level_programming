#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *a;
listint_t *b = *head;

a = malloc(sizeof(listint_t));
if (!a || !head)
return (NULL);
a->n = n;
a->next = NULL;
if (idx == 0)
{
a->next = *head;
*head = a;
return (a);
}
for (x = 0; b && x < idx; x++)
{
if (x == idx - 1)
{
a->next = b->next;
b->next = a;
return (a);
}
else
b = b->next;
}
return (NULL);
}
